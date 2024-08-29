/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 00:41:19 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/23 00:57:42 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "../../00.Core/core.c"

int	ft_str_is_alpha(char *str);

void	test_ft_str_is_alpha(char *str, int expected)
{
	int actual = ft_str_is_alpha(str);

	if (actual == expected)
	{
		printf("OK\n");
	}
	else
	{
		printf("String: %s. Expected: %d, Actual:%d\n", str, expected, actual); 
	}
}

int	main(int argc, char **argv)
{
	begin_test(argc, argv);
	TEST(test_ft_str_is_alpha("Hello", 1));
	TEST(test_ft_str_is_alpha("123", 0));
	TEST(test_ft_str_is_alpha("Hll0", 0));
	TEST(test_ft_str_is_alpha("", 1));
	TEST(test_ft_str_is_alpha("\x04blue", 1));
	TEST(test_ft_str_is_alpha("\x04 blue", 0));
	end_test();
}
