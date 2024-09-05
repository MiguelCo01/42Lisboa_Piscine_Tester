/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 03:29:09 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/09/05 16:18:58 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../../00.Core/core.c"


char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(TEST_ARGS)
{
	char *decimal = "01234567890";
	char *binary = "01";

	SUITE_START;
		TEST_START
			test_description("converting 10 from 'decimal' to 'binary'");
			assert_str(ft_convert_base("10", decimal, binary), "1010", "");
		TEST_END
	SUITE_END;
	
}

