/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <mimelo-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:31:43 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/22 20:55:09 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include <stdio.h>
#include <string.h>
#include "../../00.Core/core.c"

char *ft_strcpy(char *dest, char *src);

void test_strcpy(char *dest, char *src)
{
	char *expected;
	char *actual;
	char *dest_dup;
	char *src_dup;
	int result;

	dest_dup = strdup(dest);
	src_dup = strdup(src);


	expected = strcpy(dest_dup, src_dup);
	actual = ft_strcpy(dest, src);
	result = strcmp(expected, actual);
	if (result == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("Testing %s and %s\n", dest, src);
		printf("Result %d. Expected: %s. Actual: %s\n", result, expected, actual);
		printf("Src: %s, src_dup: %s\n", src, src_dup);
	}
}



int	main(int argc, char **argv)
{	

	begin_test(argc, argv);

	//Test 0 - Same size string
	char dest1[]= "Hello";
	char src1[] = "Bluee";
	TEST(test_strcpy(dest1, src1));

	//Test 1 - Dest is smaller
	char dest2[]= "Hel";
	char src2[] = "Bluee";
	TEST(test_strcpy(dest2, src2));

	//Test 2 - Src is smaller
	char dest3[]= "Hello";
	char src3[] = "Bl";
	TEST(test_strcpy(dest3, src3));

	//Test 4 - dest has \0
	char dest7[]= "\0";
	char src7[] = "Bluee";
	TEST(test_strcpy(dest7, src7));

	//Test 5 - src has \0
	char dest8[]= "Hello";
	char src8[] = "\0";
	TEST(test_strcpy(dest8, src8));

	//Test 6 - non printable chars
	char dest9[]="Hello";
	char src9[] = "\xC8 \xC9";
	TEST(test_strcpy(dest9, src9));

	end_test();
}
