/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:59:45 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 17:13:59 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	ft_fibonacci(int index);

int	main(TEST_ARGS)
{
	BEGIN_TEST;

	TEST(assert_int(ft_fibonacci(-1), -1, "Fibonacci negative"));
	TEST(assert_int(ft_fibonacci(0), 0, "Fibonacci 0"));
	TEST(assert_int(ft_fibonacci(1),1 , "Fibonacci 1"));
	TEST(assert_int(ft_fibonacci(2), 1, "Fibonacci 2"));
	TEST(assert_int(ft_fibonacci(3), 2, "Fibonacci 3"));
	TEST(assert_int(ft_fibonacci(16), 987, "Fibonacci 16"));
	TEST(assert_int(ft_fibonacci(46), 1836311903, "Fibonacci 46"));
	TEST(assert_int(ft_fibonacci(47), 0, "Fibonacci 47. Int overflow. Dont worry"));

	END_TEST;
}


