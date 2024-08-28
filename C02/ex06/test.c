/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 22:58:34 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/25 20:05:48 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <string.h>

int	ft_str_is_printable(char *str);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	TEST(assert_int(ft_str_is_printable(str), 
	END_TEST;
}
