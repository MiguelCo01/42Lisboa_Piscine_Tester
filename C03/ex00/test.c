/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 23:16:54 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/25 01:19:45 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <string.h>
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2);


int	main(TEST_ARGS)
{

//	printf("%d %d\n",ft_strcmp("ab", "aa"), strcmp("ab", "aa"));
	BEGIN_TEST;
	TEST(assert_int(ft_strcmp("a", "a"), strcmp("a", "a"), "Comparing 'a' and 'a'"));
	TEST(assert_int(ft_strcmp("a", "b"), strcmp("a", "b"), "Comparing 'a' and 'b'"));
	TEST(assert_int(ft_strcmp("ab", "a"), strcmp("ab", "a"), "Comparing 'ab' and 'a'"));
	TEST(assert_int(ft_strcmp("ab", "ac"), strcmp("ab", "ac"), "Comparing 'ab' and 'ac'"));
	TEST(assert_int(ft_strcmp("a", "b"), strcmp("a", "b"), "Comparing 'a' and 'b'"));
	TEST(assert_int(ft_strcmp("aic", "adc"), strcmp("aic", "adc"), "Comparing 'aic' and 'adc'"));
	TEST(assert_int(ft_strcmp("aic", ""), strcmp("aic", ""), "Comparing 'aic' and ''"));
	TEST(assert_int(ft_strcmp("", ""), strcmp("", ""), "Comparing '' and ''"));
	TEST(assert_int(ft_strcmp("", "ab"), strcmp("", "ab"), "Comparing '' and 'ab'"));
	END_TEST;
}
