/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:29:23 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 20:03:46 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	ft_ten_queens_puzzle(void);

int	main(TEST_ARGS)
{
	BEGIN_TEST;

	TEST(assert_int(ft_ten_queens_puzzle(), 724, "Solition for n = 10"));

	END_TEST;
}


