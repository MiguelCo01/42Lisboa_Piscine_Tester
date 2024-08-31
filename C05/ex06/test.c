/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:29:23 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 19:59:54 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	ft_is_prime(int nb);

int	main(TEST_ARGS)
{
	BEGIN_TEST;

	TEST(assert_int(ft_is_prime(0), 0, "is prime 0"));
	TEST(assert_int(ft_is_prime(1), 0, "is prime 1"));
	TEST(assert_int(ft_is_prime(2), 1 , "sqrt 2"));
	TEST(assert_int(ft_is_prime(5), 0, "is prime 4"));
	TEST(assert_int(ft_is_prime(-2), 0, "is prime -2"));
	TEST(assert_int(ft_is_prime(2147483647), 1, "is prime 2147483647"));

	END_TEST;
}


