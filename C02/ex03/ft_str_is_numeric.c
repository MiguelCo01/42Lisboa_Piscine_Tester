/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 21:41:56 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/23 21:58:53 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../../00.Core/core.c"
int	ft_str_is_numeric(char *);


void	test_is_numeric(char *str, int expected)
{
	int actual;
	int result;

	actual = ft_str_is_numeric(str);
	result = actual == expected;

	if (result == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("NOK. Expecting: %d, Actual: %d", expected, actual);
	}
}

int	main(int argc, char **argv)
{
	begin_test(argc, argv);

	TEST(test_is_numeric("1", 1))
	TEST(test_is_numeric("234234", 1))
	TEST(test_is_numeric("A", 0))
	TEST(test_is_numeric("", 0))
	TEST(test_is_numeric("\x0A", 0))

	end_test();
}

