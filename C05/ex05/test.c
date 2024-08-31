/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:29:23 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 18:28:52 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	ft_sqrt(int nb);

int	main(TEST_ARGS)
{
	BEGIN_TEST;

	TEST(assert_int(ft_sqrt(0), 0, "sqrt 0"));
	TEST(assert_int(ft_sqrt(1), 1, "sqrt 1"));
	TEST(assert_int(ft_sqrt(2), 0 , "sqrt 2"));
	TEST(assert_int(ft_sqrt(4), 2, "sqrt 4"));
	TEST(assert_int(ft_sqrt(-2), 0, "sqrt -2"));
	TEST(assert_int(ft_sqrt(16), 4, "sqrt 16"));
	TEST(assert_int(ft_sqrt(2147395600), 46340, "sqrt 2147395600"));
	TEST(assert_int(ft_sqrt(2147395601), 0, "sqrt 2147395601"));

	END_TEST;
}


