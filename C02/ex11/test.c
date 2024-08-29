/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 23:30:52 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/29 01:36:41 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <stdio.h>
void	ft_putstr_non_printable(char *str);

void dummy(char *str)
{
	ft_putstr_non_printable(str);
	fflush(stderr);
	exit(1);
}

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	TEST(dummy("Hello"));
	TEST(dummy("\x03Hello"));
	TEST(dummy("\x03Hello\x1E"));
	END_TEST;
}
