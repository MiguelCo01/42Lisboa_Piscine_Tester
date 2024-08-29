/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:47:50 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/28 22:56:09 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

char	*ft_strcapitalize(char *str);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	char s1[100] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char s2[100] = "Ola, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um";
	TEST(assert_str(ft_strcapitalize(s1), s2, "Example"));
	END_TEST;
}
