/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 23:16:54 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 13:35:37 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <string.h>
int	ft_strcmp(char *s1, char *s2);

int sign(int i)
{
	if (i < 0)
		return (-1);
	if (i > 0)
		return (1);
	return (0);
}

int	main(TEST_ARGS)
{

	BEGIN_TEST;
	TEST(assert_int(sign(ft_strcmp("a", "a")), strcmp("a", "a"), "Comparing 'a' and 'a'"));
	TEST(assert_int(sign(ft_strcmp("a", "b")), strcmp("a", "b"), "Comparing 'a' and 'b'"));
	TEST(assert_int(sign(ft_strcmp("ab", "a")), strcmp("ab", "a"), "Comparing 'ab' and 'a'"));
	TEST(assert_int(sign(ft_strcmp("ab", "ac")), strcmp("ab", "ac"), "Comparing 'ab' and 'ac'"));
	TEST(assert_int(sign(ft_strcmp("a", "b")), strcmp("a", "b"), "Comparing 'a' and 'b'"));
	TEST(assert_int(sign(ft_strcmp("aic", "adc")), strcmp("aic", "adc"), "Comparing 'aic' and 'adc'"));
	TEST(assert_int(sign(ft_strcmp("aic", "")), strcmp("aic", ""), "Comparing 'aic' and ''"));
	TEST(assert_int(sign(ft_strcmp("", "")), strcmp("", ""), "Comparing '' and ''"));
	TEST(assert_int(sign(ft_strcmp("", "ab")), strcmp("", "ab"), "Comparing '' and 'ab'"));
	END_TEST;
}
