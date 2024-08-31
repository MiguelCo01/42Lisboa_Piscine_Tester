/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 23:46:36 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/29 18:16:47 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	ft_str_is_lowercase(char *str);

int	main(int argc, char **argv)
{
	begin_test(argc, argv);

	TEST(assert_int(ft_str_is_lowercase("a"), 1, "is lower 'a'"));
	TEST(assert_int(ft_str_is_lowercase("A"), 0, "is lower 'A'"));
	TEST(assert_int(ft_str_is_lowercase("A2"), 0, "is lower 'A2'"));
	TEST(assert_int(ft_str_is_lowercase(""), 1, "is lower ''"));
	TEST(assert_int(ft_str_is_lowercase(" "), 0, "is lower ' '"));

	end_test();
}

