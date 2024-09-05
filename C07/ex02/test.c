/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 00:47:41 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/09/05 01:20:30 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"
#include <string.h>
#include <errno.h>
#include "limits.h"
#include "stdlib.h"
int ft_ultimate_range(int **range, int min, int max);

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	
		TEST_START
			test_description("Testing for [0 - 0]");
			int **r = malloc(sizeof(int *) * 1);
		 	assert_int(ft_ultimate_range(r, 0, 0), -1, "");		
			assert_ptr(*r, NULL, "Must be null");
			free(r);
		TEST_END
		
		TEST_START
			test_description("Testing for [0 - 1]");
			int **r = malloc(sizeof(int *) * 1);
			int expected[1] = {0};

			assert_int(ft_ultimate_range(r, 0, 1), 1, "");		
			assert_ptr_not(*r, NULL, "Must not be null");
			includes(*r, expected, 1);
			free(*r);
			free(r);
		TEST_END

		TEST_START
			test_description("Testing for [0 - 11]");
			int **r = malloc(sizeof(int *) * 1);
			int expected[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
			assert_int(ft_ultimate_range(r, 0, 11), 11, "");		
			assert_ptr_not(*r, NULL, "Must not be null");
			includes(*r, expected, 11);
			free(*r);
			free(r);
		TEST_END
	
		TEST_START
			test_description("Testing for [-5 - 5");
			int **r = (int **)malloc(sizeof(int *) * 1);
			int expected[10] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
	
			assert_int(ft_ultimate_range(r, -5, 5), 10, "");		
			assert_ptr_not(*r, NULL, "Must not be null");
			includes(*r, expected, 10);
			free(*r);
			free(r);
		TEST_END

		TEST_START
			test_description("Testing for Malloc NULL");
			int **r = (int **)malloc(sizeof(int *) * 1);
	
			mock_malloc(1);
			assert_int(ft_ultimate_range(r, -5, 5), -1, "");	
			assert_ptr(*r, NULL, "Must be null");
			free(r);
			mock_malloc(0);
		TEST_END

		TEST_START
			test_description("Testing for [INT_MIN / 4 - INT_MAX / 4");
			int **r = (int **)malloc(sizeof(int *) * 1);
	
			assert_int(ft_ultimate_range(r, INT_MIN / 4, INT_MAX / 4), INT_MAX / 4 - INT_MIN / 4, "");;		
			assert_ptr_not(*r, NULL, "Must not be null");
			free(*r);
			free(r);
		TEST_END
		TEST_START
			test_description("Testing when Range == NULL");
			mock_malloc(1);
			int **r = (int **)malloc(sizeof(int *) * 1);
			assert_int(ft_ultimate_range(r, 0, 1), -1, "");		
			mock_malloc(0);
		TEST_END
		

	END_TEST;
}
