/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 21:31:43 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/21 23:21:53 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

void test_strcpy(char *dest, char *src)
{
	char *expected;
	char *actual;
	char *dest_dup;
	char *src_dup;

	dest_dup = strdup(dest);
	src_dup = strdup(src);


	printf("Testing %s and %s\n", dest, src);
	expected = strcpy(dest_dup, src_dup);
	actual = ft_strcpy(dest, src);
	printf("Result %d. Expected: %s. Actual: %s\n", strcmp(expected, actual), expected, actual);
	printf("Src: %s, src_dup: %s\n", src, src_dup);
}


int	main(void)
{
	//Test 1 - Same size string
	char dest1[]= "Hello";
	char src1[] = "Bluee";
	test_strcpy(dest1, src1);

	//Test 2 - Dest is smaller
	char dest2[]= "Hel";
	char src2[] = "Bluee";
	test_strcpy(dest2, src2);

	//Test 3 - Src is smaller
	char dest3[]= "Hello";
	char src3[] = "Bl";
	test_strcpy(dest3, src3);

	//Test 4 - dest is null
 	char dest4[0];
	char src4[] = "Bluee";
	test_strcpy(dest4, src4);

	//Test 5 - src is null
	char dest5[]= "Hello";
	char src5[0];
	test_strcpy(dest5, src5);

	//Test 6 - both are null
	char dest6[0];
	char src6[0];
	test_strcpy(dest6, src6);

	//Test 7 - dest has \0
	char dest7[]= "\0";
	char src7[] = "Bluee";
	test_strcpy(dest7, src7);

	//Test 8 - src has \0
	char dest8[]= "Hello";
	char src8[] = "\0";
	test_strcpy(dest8, src8);

	//Test 9 - non printable chars
	char dest9[]="Hello";
	char src9[] = "\xC8 \xC9";
	test_strcpy(dest9, src9);


}
