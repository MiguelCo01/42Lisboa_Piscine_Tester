/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:19:17 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 15:31:08 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(TEST_ARGS)
{

	BEGIN_TEST;
	// Normal Copy buffer 20
	{
		char s1[20] = "Hello ";
		char s2[20] = "World";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);

		unsigned int size = sizeof(s1);

		int r1 = ft_strlcat(s1, s2, size);
		int r2 = strlcat(s1_sys, s2_sys, size);

		TEST(assert_uint(r1, r2, "Concat 'Hello ' and 'World' 5 char"));
		TEST(assert_str(s1, s1_sys, "Comparing Dest"));
	}

	// len(dest) > size
	{
		char s1[] = "Hello ";
		char s2[] = "World";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);

		unsigned int size = sizeof(s1) -1;

		int r1 = ft_strlcat(s1, s2, size);
		int r2 = strlcat(s1_sys, s2_sys, size);

		TEST(assert_uint(r1, r2, "Concat 'Hello ' and 'World' 5 char"));
		TEST(assert_str(s1, s1_sys, "Comparing Dest 0-0-0 "));
	}

	// len(dest) == size
	{
		char s1[] = "Hello ";
		char s2[] = "World";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);

		unsigned int size = 6;

		int r1 = ft_strlcat(s1, s2, size);
		int r2 = strlcat(s1_sys, s2_sys, size);

		TEST(assert_uint(r1, r2, "Concat 'Hello ' and 'World' 5 char"));
		TEST(assert_str(s1, s1_sys, "Concat 'Hello ' and 'World' "));
	}
	// size  = len(dest) + len(src)/2 -> To copy half of src
	{
		char s1[] = "Hello ";
		char s2[] = "World";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);

		unsigned int size = 7 + 6/2;

		int r1 = ft_strlcat(s1, s2, size);
		int r2 = strlcat(s1_sys, s2_sys, size);

		TEST(assert_uint(r1, r2, "Concat 'Hello ' and 'World' 5 char[[[["));
		TEST(assert_str(s1, s1_sys, "Comparing Dest ---- "));
	}

	// size  = 0
	{
		char s1[] = "Hello ";
		char s2[] = "World";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);

		unsigned int size = 0;

		int r1 = ft_strlcat(s1, s2, size);
		int r2 = strlcat(s1_sys, s2_sys, size);

		TEST(assert_uint(r1, r2, "Concat 'Hello ' and 'World' 0 char"));
		TEST(assert_str(s1, s1_sys, "Comparing Dest"));
	}
	
	// size  = 1
	{
		char s1[] = "Hello ";
		char s2[] = "World";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);

		unsigned int size = 1;

		int r1 = ft_strlcat(s1, s2, size);
		int r2 = strlcat(s1_sys, s2_sys, size);

		TEST(assert_uint(r1, r2, "Concat 'Hello ' and 'World' 0 char"));
		TEST(assert_str(s1, s1_sys, "Comparing Dest - - - - "));
	}


	END_TEST;
}
