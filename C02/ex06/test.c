/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:58:34 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/28 20:45:56 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <string.h>

int	ft_str_is_printable(char *str);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	TEST(assert_int(ft_str_is_printable("abc"), 1, "Checking 'abc'"));	
	TEST(assert_int(ft_str_is_printable(""), 1, "Checking ''"));	
	TEST(assert_int(ft_str_is_printable("\n"), 0, "Checking '\\n'"));	
	TEST(assert_int(ft_str_is_printable("\nab"), 0, "Checking '\\nab'"));	
	END_TEST;
}
