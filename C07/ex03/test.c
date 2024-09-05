/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 01:43:43 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/09/05 03:02:46 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

char *ft_strjoin(int size, char **strs, char *sep);

int	main(TEST_ARGS)
{
	SUITE_START;

		TEST_START
			test_description("Joining [] with '--'");
			char *strs[0];
			char *sep = "--";
			char *result = ft_strjoin(sizeof(strs), strs, sep);
			assert_ptr_not(result, NULL, "");
			assert_str(result, "", "");
			free(result);
			
		TEST_END
		TEST_START
			test_description("Joining ['Ola'] with '--'");
			char *strs[1] = {"Ola"};
			char *sep = "--";
			char *result = ft_strjoin(1, strs, sep);
			assert_ptr_not(result, NULL, "");
			assert_str(result, "Ola", "");
			free(result);
			
		TEST_END
		TEST_START
			test_description("Joining ['Ola', 'vida'] with '--'");
			char *strs[2] = {"Ola", "vida"};
			char *sep = "--";
			char *result = ft_strjoin(2, strs, sep);
			assert_ptr_not(result, NULL, "");
			assert_str(result, "Ola--vida", "");
			free(result);
			
		TEST_END
		TEST_START
			test_description("Joining ['Ola'] with '--' and malloc null");
			char *strs[1] = {"Ola"};
			char *sep = "--";
			mock_malloc(1);
			char *result = ft_strjoin(1, strs, sep);
			assert_ptr(result, NULL, "");
			mock_malloc(1);
			
		TEST_END
		TEST_START
			test_description("Joining *strs == NULL with '--'");
			char **strs = 0;
			char *sep = "--";
			char *result = ft_strjoin(1, strs, sep);
			assert_ptr(result, NULL, "");
			
		TEST_END
		TEST_START
			test_description("Joining strs {'ola'} with sep == NULL");
			char *strs[1] = {"ola"};
			char *sep = 0;
			char *result = ft_strjoin(1, strs, sep);
			assert_ptr(result, NULL, "");
			
		TEST_END




	SUITE_END;
}
