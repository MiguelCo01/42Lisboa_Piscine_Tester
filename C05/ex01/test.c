/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:17:49 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/09/01 12:59:26 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../00.Core/core.c"
int	ft_recursive_factorial(int nb);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	// Test: negative
	TEST(assert_int(ft_recursive_factorial(-5), 0, "Factorial -5"));
	// Test: Positive
	TEST(assert_int(ft_recursive_factorial(10), 3628800, "Factorial 10"));
	// Test: 0
	TEST(assert_int(ft_recursive_factorial(0), 1, "Factorial 0"));
	TEST(assert_int(ft_recursive_factorial(1), 1, "Factorial 1"));
	// Test:Almost overflow for timeout
	TEST(assert_int(ft_recursive_factorial(12), 479001600, "Factorial 12"));
	END_TEST;
}


