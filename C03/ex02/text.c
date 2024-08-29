/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:57:49 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/25 02:24:43 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <string.h>

char *ft_strcat(char *dest, char *src);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	{
		char s1[] = "Hello ";
		char s2[] = "World";
		TEST(assert_str(ft_strcat(s1, s2), strcat(s1, s2), "Concat 'Hello ' 'World'"));	
	}
	{
		char s1[] = "";
		char s2[] = "World";
		TEST(assert_str(ft_strcat(s1, s2), strcat(s1, s2), "Concat '' 'World'"));	
	}
	{
		char s1[] = "Hello ";
		char s2[] = "World";
		TEST(assert_str(ft_strcat(s1, s2), strcat(s1, s2), "Concat 'Hello ' 'World'"));	
	}
	{
		char s1[] = "";
		char s2[] = "";
		TEST(assert_str(ft_strcat(s1, s2), strcat(s1, s2), "Concat '' ''"));	
	}
	{
		char s1[] = " Blue Blue ";
		char s2[] = "Red";
		TEST(assert_str(ft_strcat(s1, s2), strcat(s1, s2), "Concat ' Blue Blue ' 'Red'"));	
	}
	{
		char s1[] = "C";
		char s2[] = "Red";
		TEST(assert_str(ft_strcat(s1, s2), strcat(s1, s2), "Concat 'c' 'Red'"));	
	}

	END_TEST;
}

