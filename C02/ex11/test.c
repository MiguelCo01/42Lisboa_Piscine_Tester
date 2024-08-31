/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 23:30:52 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/29 19:35:38 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	TEST(ASSERT_STDOUT(ft_putstr_non_printable("Hello"), "Hello", "Should print 'Hello'"));
	TEST(ASSERT_STDOUT(ft_putstr_non_printable("\x03Hello"), "\\03Hello", "Should print '\\03Hello'"));
	TEST(ASSERT_STDOUT(ft_putstr_non_printable("\x03Hello\x1E"), "\\03Hello\\1e", "Should print '\\03Hello\\x1e'"));
	TEST(ASSERT_STDOUT(ft_putstr_non_printable(""), "", "Should print '"));
	TEST(ASSERT_STDOUT(ft_putstr_non_printable("\x7e\x7f"), "~\\7f", "Should print '"));
	TEST(ASSERT_STDOUT(ft_putstr_non_printable("\x0f\x7f"), "\\0f\\7f", "Should print '"));
	END_TEST;
}
