/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <mimelo-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:56:51 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/27 15:51:40 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	ft_atoi(char * str);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	TEST(assert_int(ft_atoi("10"), 10, "Parsing '10'"));
	TEST(assert_int(ft_atoi("-10"), -10, "Parsing '-10'"));
	TEST(assert_int(ft_atoi("-+10"), -10, "Parsing '-+10'"));
	TEST(assert_int(ft_atoi("-+-10"), 10, "Parsing '-+-10'"));
	TEST(assert_int(ft_atoi(" -+-10"), 10, "Parsing ' -+-10'"));
	TEST(assert_int(ft_atoi(" \f\n\r\t\v-+-10"), 10, "Parsing ' \\f\\n\\r\\t\\v-+-10'"));
	TEST(assert_int(ft_atoi(" \f\n\r\t\v-+-10ia"), 10, "Parsing ' \\f\\n\\r\\t\\v-+-10'"));
	TEST(assert_int(ft_atoi(" \f\n\r\t\v-+- 10ia"), 0, "Parsing ' \\f\\n\\r\\t\\v-+- 10'"));
	TEST(assert_int(ft_atoi(" \f\n\r\t\v-+-a220ia"), 0, "Parsing ' \\f\\n\\r\\t\\v-+-a220ia'"));
	TEST(assert_int(ft_atoi("-+-a220ia"), 0, "Parsing 'a-+-a220ia'"));
	
	END_TEST;
}
