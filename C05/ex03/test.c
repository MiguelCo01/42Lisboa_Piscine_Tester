/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:17:49 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/09/03 22:43:39 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../00.Core/core.c"

int	ft_recursive_power(int nb, int power);

int	main(TEST_ARGS)
{
	BEGIN_TEST;

	// Test: negative base and positive power
	TEST(assert_int(ft_recursive_power(-2, 2), 4, "-2^2"));

	// Test: Positive base and positive power
	TEST(assert_int(ft_recursive_power(3, 3), 27, "-3^3"));

	// Test: negative and negative power
	TEST(assert_int(ft_recursive_power(-2, -4), 0, "-2^-4"));

	// Test: positive power and negative power
	TEST(assert_int(ft_recursive_power(2, -4), 0, "2^-4"));
	
	// Test:Almost overflow for timeout and negteive power
	TEST(assert_int(ft_recursive_power(2, -31), 0, "2^-31"));
	
	// Test: negative base and negative power overflow
	TEST(assert_int(ft_recursive_power(-2, -30), 0, "-2^-30"));
	
	// Test: Positive base and negative power overflow
	TEST(assert_int(ft_recursive_power(2, -30), 0, "2^-31"));
	
	// Test: Positive base and positive power overflow
	TEST(assert_int(ft_recursive_power(2, 30), 1073741824, "2^30"));

	// Test: Negative  base and positive power overflow
	TEST(assert_int(ft_recursive_power(-2, 30), 1073741824, "-2^-30"));

	// Test: Negative  base and positive power overflow (even)
	TEST(assert_int(ft_recursive_power(-2, 29), -536870912, "-2^-29"));
	
	// Test: base 0 power 0
	TEST(assert_int(ft_recursive_power(0, 0), 1, "0^-0"));

	// Test: base 0 power 2
	TEST(assert_int(ft_recursive_power(0, 2), 0, "0^2"));


	END_TEST;
}


