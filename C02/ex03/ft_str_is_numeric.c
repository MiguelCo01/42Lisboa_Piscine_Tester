/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 21:41:56 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/29 18:13:54 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../../00.Core/core.c"
int	ft_str_is_numeric(char *);

int	main(int argc, char **argv)
{
	begin_test(argc, argv);

	TEST(assert_int(ft_str_is_numeric("1"), 1, "is numeric '1'"))
	TEST(assert_int(ft_str_is_numeric("234234"), 1, "is numeric '234234'"))
	TEST(assert_int(ft_str_is_numeric("ABC"), 0, "is numeric 'ABC'"))
	TEST(assert_int(ft_str_is_numeric("A"), 0, "is numeric 'A'"))
	TEST(assert_int(ft_str_is_numeric(""), 1, "is numeric ''"))
	TEST(assert_int(ft_str_is_numeric("\x0A"), 0, "is numeric '\x0A'"))

	end_test();
}

