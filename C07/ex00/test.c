/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 00:29:29 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/31 00:55:02 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

char	*ft_strdup(char *src);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	{
		char *original = "Hello";
		char *result;

		result = ft_strdup(original);
		TEST(assert_str(result, original, "dup 'Hello'"));
	//	TEST(assert_int(errno, 12, "Errno should be zero"));
		free(result);
	}
	END_TEST;
}

