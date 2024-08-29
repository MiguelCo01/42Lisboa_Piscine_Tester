/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <mimelo-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:13:51 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/27 19:21:39 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

void ft_putstr(char *str);


int main(TEST_ARGS)
{
	BEGIN_TEST;
	TEST(ASSERT_STDOUT(ft_putstr(""), "", "Printing ''"));
	TEST(ASSERT_STDOUT(ft_putstr("100"), "100", "Printing '100'"));
	TEST(ASSERT_STDOUT(ft_putstr("Uli  9"), "Uli  9", "Parsing 'Uli  9'"));
	TEST(ASSERT_STDOUT(ft_putstr("\x3\x3"), "\x3\x3", "Parsing '\x3\x3'"));
	END_TEST;
}
