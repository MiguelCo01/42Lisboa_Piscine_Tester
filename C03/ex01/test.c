/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:21:56 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 13:39:29 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);


int sign(int i)
{
	if (i < 0)
		return (-1);
	if (i > 0)
		return (1);
	return (0);
}

int main(TEST_ARGS)
{
	BEGIN_TEST;
	TEST(assert_int(sign(ft_strncmp("abc", "abc", 3)), strncmp("abc", "abc", 3), "Comparing 'abc' and 'abc' for n 3"));
	TEST(assert_int(sign(ft_strncmp("abd", "abc", 2)), strncmp("abd", "abc", 2), "Comparing 'abd' and 'abc' for n 2"));
	TEST(assert_int(sign(ft_strncmp("", "", 0)), strncmp("", "", 0), "Comparing 'abd' and 'abc' for n 2"));
	TEST(assert_int(sign(ft_strncmp("ab", "a", 2)), strncmp("ab", "a", 2), "Comparing 'ab' and 'a' for n 2"));
	TEST(assert_int(sign(ft_strncmp("a", "ab", 2)), strncmp("a", "ab", 2), "Comparing 'a' and 'ab' for n 2"));
	TEST(assert_int(sign(ft_strncmp("hello world", "hello world ", 11)), strncmp("hello world", "hello world ", 11), "Comparing 'a' and 'ab' for n 2"));
	
	TEST(assert_int(sign(ft_strncmp("a", "ab", 0)), strncmp("a", "ab", 0), "Comparing 'a' and 'ab' for n 0"));
	END_TEST;
}
