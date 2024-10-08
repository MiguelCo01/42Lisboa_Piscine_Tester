/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:58:34 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/29 18:22:43 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	ft_str_is_printable(char *str);

int	main(int argc, char **argv)
{
	begin_test(argc, argv);

	TEST(assert_int(ft_str_is_printable("a"), 1, "is printable 'a'"));
	TEST(assert_int(ft_str_is_printable("A"), 1, "is printable 'A'"));
	TEST(assert_int(ft_str_is_printable("A2"), 1, "is printable 'A2'"));
	TEST(assert_int(ft_str_is_printable(""), 1, "is printable ''"));
	TEST(assert_int(ft_str_is_printable("\n"), 0, "is printable '\\n'"));
	TEST(assert_int(ft_str_is_printable(" "), 1, "is printable '\\n'"));

	end_test();
}

