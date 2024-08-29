/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 23:46:36 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/24 22:56:38 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	ft_str_is_lowercase(char *str);

int	main(int argc, char **argv)
{
	begin_test(argc, argv);

	TEST(assert_int(ft_str_is_lowercase("a"),  0, "'a'"));
	TEST(assert_int(ft_str_is_lowercase("A"),  1, "'A'"));
	TEST(assert_int(ft_str_is_lowercase("A2"), 0, "'A2'"));
	TEST(assert_int(ft_str_is_lowercase(""),   0, "''"));
	TEST(assert_int(ft_str_is_lowercase(" "),  0, "' '"));

	end_test();
}

