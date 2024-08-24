/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:59:07 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/22 21:08:41 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../../00.Core/core.c"


int	ft_strlen(char *str);


void	test_lenght(char *str, int expected)
{
	int actual = ft_strlen(str);
	if (actual != expected)
	{
		printf("Expected: %d, Actual: %d\n", expected, actual);
	}
	else
	{
		printf("Ok\n");
	}
}


int	main(int argc, char ** argv)
{
	begin_test(argc, argv);

	TEST(test_lenght("Hello World!", 12));
	TEST(test_lenght("Hello", 5));
	TEST(test_lenght("", 0));
	TEST(test_lenght("\xC8 \xC9", 3 ));
	TEST(test_lenght(0, 0));
	
	end_test();
}
