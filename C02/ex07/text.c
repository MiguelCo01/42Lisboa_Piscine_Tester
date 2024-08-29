/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:37:27 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/28 21:55:30 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"


char	*ft_strupcase(char *str);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	{
		char str[20] = "";
		TEST(assert_str(ft_strupcase(str), "", "upcase ''"));
	}
	{
		char str[20] = "a";
		TEST(assert_str(ft_strupcase(str), "A", "upcase 'a'"));
	}
	{
		char str[20] = "A";
		TEST(assert_str(ft_strupcase(str), "A", "upcase 'A'"));
	}
	{
		char str[20] = "aBc";
		TEST(assert_str(ft_strupcase(str), "ABC", "upcase 'aBc'"));
	}
	{
		char str[20] = "aBc123\n";
		TEST(assert_str(ft_strupcase(str), "ABC123\n", "upcase 'aBc123\n'"));
	}




	END_TEST;
}
