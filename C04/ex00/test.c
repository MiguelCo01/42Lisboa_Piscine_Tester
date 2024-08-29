/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <mimelo-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:12:19 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/27 00:18:05 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	ft_strlen(char *str);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	TEST(assert_int(ft_strlen(""), 0, "Len('')"));
	TEST(assert_int(ft_strlen("H"), 1, "Len('H')"));
	TEST(assert_int(ft_strlen("HE"), 2, "Len('HE')"));
	TEST(assert_int(ft_strlen("\0\n"), 0, "Len('HE')"));
	END_TEST;
}

