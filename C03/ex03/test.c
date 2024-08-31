/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 02:29:48 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 13:50:53 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../00.Core/core.c"
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	{
		char s1[20] = "Hello";
		char s2[20] = "World";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);
		TEST(assert_str(ft_strncat(s1, s2, 5), strncat(s1_sys, s2_sys, 5), "Cat n 5 'Hello' 'World'"));
	}
	{
		char s1[20] = "Hello";
		char s2[20] = "World";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);
		TEST(assert_str(ft_strncat(s1, s2, 2), strncat(s1_sys, s2_sys, 2), "Cat n 2 'Hello' 'World'"));
	}
	{
		char s1[20] = "Hello";
		char s2[20] = "World";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);
		TEST(assert_str(ft_strncat(s1, s2, 7), strncat(s1_sys, s2_sys, 7), "Cat n 7 'Hello' 'World'"));
	}
	{
		char s1[20] = "Hello";
		char s2[20] = "Wor";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);
		TEST(assert_str(ft_strncat(s1, s2, 5), strncat(s1_sys, s2_sys, 5), "Cat n 5 'Hello' 'World'"));
	}
	{
		char s1[20] = "";
		char s2[20] = "World";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);
		TEST(assert_str(ft_strncat(s1, s2, 5), strncat(s1_sys, s2_sys, 5), "Cat n 5 'Hello' 'World'"));
	}
	{
		char s1[20] = "Hello";
		char s2[20] = "";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);
		TEST(assert_str(ft_strncat(s1, s2, 5), strncat(s1_sys, s2_sys, 5), "Cat n 5 'Hello' 'World'"));
	}
	{
		char s1[20] = "";
		char s2[20] = "";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);
		TEST(assert_str(ft_strncat(s1, s2, 5), strncat(s1_sys, s2_sys, 5), "Cat n 5 'Hello' 'World'"));
	}
	{
		char s1[20] = "Hello";
		char s2[20] = "World";
		char *s1_sys = strdup(s1);
		char *s2_sys = strdup(s2);
		TEST(assert_str(ft_strncat(s1, s2, 0), strncat(s1_sys, s2_sys, 0), "Cat n 0 'Hello' 'World'"));
	}

	END_TEST;
}
