/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   text.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 02:58:51 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 14:04:16 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	
	TEST(assert_str(ft_strstr("A bola", "z"), strstr("A bola", "z"), "Search 'z' in 'A bola'"));
	TEST(assert_str(ft_strstr("A bola", "bola"), strstr("A bola", "bola"), "Search 'bola' in 'A bola'"));
	TEST(assert_str(ft_strstr("A bola", ""), strstr("A bola", ""), "Search '' in 'A bola'"));
	TEST(assert_str(ft_strstr("A bola", " "), strstr("A bola", " "), "Search ' ' in 'A bola'"));
	TEST(assert_str(ft_strstr("A bola", "Bola"), strstr("A bola", "Bola"), "Search 'Bola' in 'A bola'"));
	TEST(assert_str(ft_strstr("A bola bola", "bola"), strstr("A bola bola", "bola"), "Search 'Bola' in 'A bola'"));
	TEST(assert_str(ft_strstr("", "bola"), strstr("", "bola"), "Search 'Bola' in 'A bola'"));
	TEST(assert_str(ft_strstr("", ""), strstr("", ""), "Search 'Bola' in 'A bola'"));
	END_TEST;
}
