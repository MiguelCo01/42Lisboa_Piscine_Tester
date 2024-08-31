/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:29:23 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 20:02:32 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../../00.Core/core.c"

int	ft_find_next_prime(int nb);

int	main(TEST_ARGS)
{
	BEGIN_TEST;

	TEST(assert_int(ft_find_next_prime(0), 2, "next prime 0"));
	TEST(assert_int(ft_find_next_prime(1), 2, "next prime 1"));
	TEST(assert_int(ft_find_next_prime(2), 2 , "next_prime 2"));
	TEST(assert_int(ft_find_next_prime(4), 5, "next prime"));
	TEST(assert_int(ft_find_next_prime(-2), 2, "next prime -2"));
	TEST(assert_int(ft_find_next_prime(2147483646), 2147483647, "inext prime 2147483646"));

	END_TEST;
}

