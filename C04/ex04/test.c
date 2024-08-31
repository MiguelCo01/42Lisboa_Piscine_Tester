/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <mimelo-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:53:15 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 16:15:35 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <limits.h>


int ft_last_power_of_ten(int nbr, int power);
int ft_putnbr_base(int i, char *base);


int main(TEST_ARGS)
{
	BEGIN_TEST;
//	TEST(assert_int(ft_last_power_of_ten(23, 10), 10, "Next power of 10 for 32"));
//	TEST(assert_int(ft_last_power_of_ten(1, 10), 1, "Next power of 10 for 1"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(1, "0123456789"), "1", "Parsing '1'"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(100, "0123456789"), "100", "Parsing '100'"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(10, "0123456789"), "10", "Parsing '10'"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(0, "0123456789"), "0", "Parsing '0'"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(-1, "0123456789"), "-1", "Parsing '-1'"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(INT_MAX, "0123456789"), "2147483647", "Parsing '2147483647'"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(INT_MIN, "0123456789"), "-2147483648", "Parsing '–2147483648'"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(-1000, "0123456789"), "-1000", "Parsing '–1000' base 10"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(1000, "0123456789"), "1000", "Parsing '1000' base 10"));
	
	// Binario
	TEST(ASSERT_STDOUT(ft_putnbr_base(1, "01"), "1", "Parsing '1' base 2"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(100, "01"), "1100100", "Parsing '100 base 2'"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(10, "01"), "1010", "Parsing '10' base 2"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(0, "01"), "0", "Parsing '0' base 2"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(-1, "01"), "-1", "Parsing '-1' base 2"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(INT_MAX, "01"), "1111111111111111111111111111111", "Parsing '2147483647' base 2"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(INT_MIN, "01"), "-10000000000000000000000000000000", "Parsing '–2147483648' base 2"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(-8, "01"), "-1000", "Parsing '–1000' base 2"));
	TEST(ASSERT_STDOUT(ft_putnbr_base( 8, "01"),  "1000", "Parsing  '1000' base 2"));
	
	// Hexadecimal
	TEST(ASSERT_STDOUT(ft_putnbr_base(1, "0123456789abcdef"), "1", "Parsing '1' base 16"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(100, "0123456789abcdef"), "64", "Parsing '100' base 16"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(10, "0123456789abcdef"), "a", "Parsing '10' abse 16"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(0, "0123456789abcdef"), "0", "Parsing '0' base 16"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(-1, "0123456789abcdef"), "-1", "Parsing '-1' base 16"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(INT_MAX, "0123456789abcdef"), "7fffffff", "Parsing '2147483647' base 16"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(INT_MIN, "0123456789abcdef"), "-80000000", "Parsing '–2147483648' abse 16"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(-4096, "0123456789abcdef"), "-1000", "Parsing '–1000' base 16"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(4096, "0123456789abcdef"), "1000", "Parsing '1000' base 16"));
	
	// Other
	TEST(ASSERT_STDOUT(ft_putnbr_base(1, "poneyvif"), "o", "Parsing '1' base 8"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(100, "poneyvif"), "oyy", "Parsing '100' base 8"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(10, "poneyvif"), "on", "Parsing '10' base 8"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(0, "poneyvif"), "p", "Parsing '0' base 8"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(-1, "poneyvif"), "-o", "Parsing '-1' base 8"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(INT_MAX, "poneyvif"), "offffffffff", "Parsing '2147483647' base 8"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(INT_MIN, "poneyvif"), "-npppppppppp", "Parsing '–2147483648' base 8"));
	TEST(ASSERT_STDOUT(ft_putnbr_base(-512, "poneyvif"), "-oppp", "Parsing '–1000' base 8"));
	TEST(ASSERT_STDOUT(ft_putnbr_base( 512, "poneyvif"),  "oppp", "Parsing  '1000' base 8"));

	END_TEST;
}
