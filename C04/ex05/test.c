/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <mimelo-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:53:46 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 16:22:08 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	ft_atoi_base(char *str, char *base);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	
	// Base 10 [0-9]
	TEST(assert_int(ft_atoi_base("10", "0123456789"), 10, "Parsing '10'"));
	TEST(assert_int(ft_atoi_base("-10", "0123456789"), -10, "Parsing '-10'"));
	TEST(assert_int(ft_atoi_base("-+10", "0123456789"), -10, "Parsing '-+10'"));
	TEST(assert_int(ft_atoi_base("-+-10", "0123456789"), 10, "Parsing '-+-10'"));
	TEST(assert_int(ft_atoi_base(" -+-10", "0123456789"), 10, "Parsing ' -+-10'"));
	TEST(assert_int(ft_atoi_base(" \f\n\r\t\v-+-10", "0123456789"), 10, "Parsing ' \\f\\n\\r\\t\\v-+-10'"));
	TEST(assert_int(ft_atoi_base(" \f\n\r\t\v-+-10ia", "0123456789"), 10, "Parsing ' \\f\\n\\r\\t\\v-+-10'"));
	TEST(assert_int(ft_atoi_base(" \f\n\r\t\v-+- 10ia", "0123456789"), 0, "Parsing ' \\f\\n\\r\\t\\v-+- 10'"));
	TEST(assert_int(ft_atoi_base(" \f\n\r\t\v-+-a220ia", "0123456789"), 0, "Parsing ' \\f\\n\\r\\t\\v-+-a220ia'"));
	TEST(assert_int(ft_atoi_base("-+-a220ia", "0123456789"), 0, "Parsing 'a-+-a220ia'"));
	TEST(assert_int(ft_atoi_base("99", "0123456789"), 99, "Parsing '99' base 10"));
	TEST(assert_int(ft_atoi_base("100", "0123456789"), 100, "Parsing '100' base 10"));
	TEST(assert_int(ft_atoi_base("101", "0123456789"), 101, "Parsing '101' base 10"));

	// Base 10 [a-j]
	TEST(assert_int(ft_atoi_base("ba", "abcdefghij"), 10, "Parsing '10'"));
	TEST(assert_int(ft_atoi_base("-ba", "abcdefghij"), -10, "Parsing '-10'"));
	TEST(assert_int(ft_atoi_base("-+ba", "abcdefghij"), -10, "Parsing '-+10'"));
	TEST(assert_int(ft_atoi_base("-+-ba", "abcdefghij"), 10, "Parsing '-+-10'"));
	TEST(assert_int(ft_atoi_base(" -+-ba", "abcdefghij"), 10, "Parsing ' -+-10'"));
	TEST(assert_int(ft_atoi_base(" \f\n\r\t\v-+-ba", "abcdefghij"), 10, "Parsing ' \\f\\n\\r\\t\\v-+-10'"));
	TEST(assert_int(ft_atoi_base(" \f\n\r\t\v-+-ba12", "abcdefghij"), 10, "Parsing ' \\f\\n\\r\\t\\v-+-10'"));
	TEST(assert_int(ft_atoi_base(" \f\n\r\t\v-+- bai1", "abcdefghij"), 0, "Parsing ' \\f\\n\\r\\t\\v-+- 10'"));
	TEST(assert_int(ft_atoi_base(" \f\n\r\t\v1+-acca32", "abcdefghij"), 0, "Parsing ' \\f\\n\\r\\t\\v1+-acca32'"));
	TEST(assert_int(ft_atoi_base("1-+-1cca12", "abcdefghij"), 0, "Parsing '1-+-1cca43'"));
	TEST(assert_int(ft_atoi_base("hh", "abcdefgh"), 63, "Parsing 'hh' base 8"));
	TEST(assert_int(ft_atoi_base("fbc", "abcdefgh"), 330, "Parsing 'fbc' base 8"));
	TEST(assert_int(ft_atoi_base("fbd", "abcdefgh"), 331, "Parsing 'fbd' base 8 "));


	// Invalid Base
	TEST(assert_int(ft_atoi_base("1-+-1cca12", ""), 0, "Base len = 0'"));
	TEST(assert_int(ft_atoi_base("1-+-1cca12", "a"), 0, "Base len = 1'"));
	TEST(assert_int(ft_atoi_base("1-+-1cca12", "12 "), 0, "Base has ' '"));
	TEST(assert_int(ft_atoi_base("1-+-1cca12", "12\f"), 0, "Base has '\f'"));
	TEST(assert_int(ft_atoi_base("1-+-1cca12", "12\n"), 0, "Base has '\n'"));
	TEST(assert_int(ft_atoi_base("1-+-1cca12", "12\r"), 0, "Base has '\r'"));
	TEST(assert_int(ft_atoi_base("1-+-1cca12", "12\t"), 0, "Base has '\t'"));
	TEST(assert_int(ft_atoi_base("1-+-1cca12", "12\v"), 0, "Base has '\v'"));
	TEST(assert_int(ft_atoi_base("1234", "012341"), 0, "Base has duplicates"));

	END_TEST;
}
