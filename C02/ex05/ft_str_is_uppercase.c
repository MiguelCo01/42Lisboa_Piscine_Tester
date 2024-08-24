/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 23:46:36 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/24 00:11:06 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../00.Core/core.c"

int	ft_str_is_lowercase(char *str);

void	test_is_lowercase(char *str, int expected)
{
	int actual;
	int result;

	actual = ft_str_is_lowercase(str);
	result = actual == expected;

	if (result == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("Expected: %d, Actual: %d", expected, actual);
	}
}

int	main(int argc, char **argv)
{
	begin_test(argc, argv);

	TEST(test_is_lowercase("a", 0));
	TEST(test_is_lowercase("A", 1));
	TEST(test_is_lowercase("A2", 0));
	TEST(test_is_lowercase("", 0));
	TEST(test_is_lowercase(" ", 0));

	end_test();
}

