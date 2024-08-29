/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:58:22 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/28 23:28:59 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <bsd/string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);


void test(char *dest, char *src, unsigned int size, char *msg)
{
	char *s1 = strdup(dest);
	char *s2 = strdup(src);
	char *s1_sys = strdup(dest);
	char *s2_sys = strdup(src);
	int result;
	int result_sys;

	result = ft_strlcpy(s1, s2, size);
	result_sys = strlcpy(s1_sys, s2_sys, size);
	assert_int(result, result_sys, msg);
	assert_str(s1, s1_sys, msg);
}

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	TEST(test("abc", " cba", 4, "Copy ' cba' to 'abc' with size 4"));
	TEST(test("abc", " cba", 0, "Copy ' cba' to 'abc' with size 0"));
	TEST(test("abc", " cba", 6, "Copy ' cba' to 'abc' with size 6"));
	TEST(test("", " cba", 6, "Copy '' to 'abc' with size 6"));
	END_TEST;
}
