/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 00:29:29 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/09/01 21:04:22 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <string.h>
#include <errno.h>
char	*ft_strdup(char *src);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	{
		char *original = "Hello";
		char *result = ft_strdup(original);

		TEST(assert_str(result, strdup(original), "Dup of 'Hello'"));
		TEST(assert_ptr_not(result, original, "Return value of strdup 'Hello'"));
		
		free(result);
	}
	{
		char *original = "";
		char *result = ft_strdup(original);

		TEST(assert_str(result, strdup(original), "Dup of ''"));
		TEST(assert_ptr_not(result, original, "Return value of strdup ''"));
		
		free(result);
	}
	// Undefined behaviour nt being tested
	{
//		char *original = NULL;
//		char *result = ft_strdup(original);

//		TEST(assert_str(result, strdup(original), "Dup of ''"));
//		TEST(assert_ptr_not(result, original, "Return value of strdup ''"));
		
//		free(result);
	}
	{
		mock_malloc(1);
		char *original = "Hello";
		char *result = ft_strdup(original);

		TEST(assert_ptr(result, 0, "Should return null pointer. Mocking malloc"));
		mock_malloc(0);
		free(result);
	}
	END_TEST;
}

