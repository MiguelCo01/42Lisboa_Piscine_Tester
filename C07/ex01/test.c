/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:06:14 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/09/05 00:37:12 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../00.Core/core.c"
#include <string.h>
#include <errno.h>
#include "limits.h"
int	*ft_range(int min, int max);


int	main(TEST_ARGS)
{
	BEGIN_TEST;
	
		TEST_START
			test_description("Testing for [0 - 0]");
			int *r;
			r = ft_range(0, 0);		
			assert_ptr(r, NULL, "Must be null");
		TEST_END
		
		TEST_START
			test_description("Testing for [0 - 0]");
			int *r;
			int expected[1] = {0};

			r = ft_range(0, 1);		
			assert_ptr_not(r, NULL, "Must not be null");
			includes(r, expected, 1);
			free(r);
		TEST_END
	
		TEST_START
			test_description("Testing for [0 - 1]");
			int *r;
			int expected[1] = {0};
	
			r = ft_range(0, 1);		
			assert_ptr_not(r, NULL, "Must not be null");
			includes(r, expected, 1);
			free(r);
		TEST_END

		TEST_START
			test_description("Testing for [0 - 11]");
			int *r;
			int expected[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
			r = ft_range(0, 11);		
			assert_ptr_not(r, NULL, "Must not be null");
			includes(r, expected, 11);
			free(r);
		TEST_END
	
		TEST_START
			test_description("Testing for [-5 - 5");
			int *r;
			int expected[10] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4};
	
			r = ft_range(-5, 5);		
			assert_ptr_not(r, NULL, "Must not be null");
			includes(r, expected, 10);
			free(r);
		TEST_END
		TEST_START
			mock_malloc(1);
			test_description("Testing for Malloc NULL");
			int *r;
	
			r = ft_range(-5, 5);		
			assert_ptr(r, NULL, "Must be null");
			mock_malloc(0);
		TEST_END

		TEST_START
			mock_malloc(1);
			test_description("Testing for Malloc NULL");
			int *r;
	
			r = ft_range(INT_MIN / 4, INT_MAX / 4);		
			assert_ptr(r, NULL, "Must be null");
			mock_malloc(0);
		TEST_END
			

	END_TEST;
}

