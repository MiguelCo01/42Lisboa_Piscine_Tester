/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <mimelo-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:19:19 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 16:02:36 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <limits.h>

int ft_last_power_of_ten(int nbr, int power);
int ft_putnbr(int i);

void example ()
{
	printf("-------------\n");
}

int main(TEST_ARGS)
{
	BEGIN_TEST;
//	TEST(assert_int(ft_last_power_of_ten(23, 10), 10, "Next power of 10 for 32"));
//	TEST(assert_int(ft_last_power_of_ten(1, 10), 1, "Next power of 10 for 1"));
	TEST(ASSERT_STDOUT(ft_putnbr(1), "1", "Parsing '1'"));
	TEST(ASSERT_STDOUT(ft_putnbr(100), "100", "Parsing '100'"));
	TEST(ASSERT_STDOUT(ft_putnbr(10), "10", "Parsing '10'"));
	TEST(ASSERT_STDOUT(ft_putnbr(0), "0", "Parsing '0'"));
	TEST(ASSERT_STDOUT(ft_putnbr(-1), "-1", "Parsing '-1'"));
	TEST(ASSERT_STDOUT(ft_putnbr(INT_MAX), "2147483647", "Parsing '2147483647'"));
	TEST(ASSERT_STDOUT(ft_putnbr(INT_MIN), "-2147483648", "Parsing '–2147483648'"));
	TEST(ASSERT_STDOUT(ft_putnbr(-100), "-100", "Parsing '-100'"));
	END_TEST;
}
