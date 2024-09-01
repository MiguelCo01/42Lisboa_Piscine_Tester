/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:29:23 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/09/01 19:52:37 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	ft_is_prime(int nb);

int	main(TEST_ARGS)
{
	BEGIN_TEST;

	TEST(assert_int(ft_is_prime(0), 0, "is prime 0"));
	TEST(assert_int(ft_is_prime(1), 0, "is prime 1"));
	TEST(assert_int(ft_is_prime(2), 1 , "si prime 2"));
	TEST(assert_int(ft_is_prime(3), 1 , "si prime 2"));
	TEST(assert_int(ft_is_prime(4), 0, "is prime 4"));
	TEST(assert_int(ft_is_prime(5), 1, "is prime 5"));
	TEST(assert_int(ft_is_prime(-2), 0, "is prime -2"));
	TEST(assert_int(ft_is_prime(2147483647), 1, "is prime 2147483647"));
	TEST(assert_int(ft_is_prime(2147483646), 0, "is prime 2147483646"));
	
	int primes[] = {7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
	};

	int i = 0;
	while (i < 22)
	{

		TEST(assert_int(ft_is_prime(primes[i]), 1, "is prime list"));
		TEST(assert_int(ft_is_prime(primes[i] + 1), 0, "is prime list"));
		TEST(assert_int(ft_is_prime(primes[i] - 1), 0, "is prime list"));
		i++;
	}

	END_TEST;
}


