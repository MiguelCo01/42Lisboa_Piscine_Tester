/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 02:36:47 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/08/29 17:10:46 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../../00.Core/core.c"
/*

The strcpy() function copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest.  The strings may not overlap, and the destination string dest 
   must be large enough to receive the copy.  Beware of buffer overruns!  (See BUGS.)
   The strncpy() function is similar, except that at most n bytes of src are copied.  Warning: If there is no null byte among the first n bytes of src, the string placed in dest will not be null-terminated.
   If the length of src is less than n, strncpy() writes additional null bytes to dest to ensure that a total of n bytes are written.         

 * */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void	test_strncpy(char *dest, char *src, unsigned int size)
{
	char *expected;
	char *actual;
	char *dest_dup;
	char *src_dup;
	int	result;
	
	dest_dup = strdup(dest);
	src_dup = strdup(src);


	expected = strncpy(dest_dup, src_dup, size);
	actual = ft_strncpy(dest, src, size);
	result = strncmp(expected, actual, size);
	assert_str_n(expected, actual, size, "Comparing String");
}


int	main(int argc, char** argv)
{
	begin_test(argc, argv);
	//Test 0 - Same size string with correct size
	char dest1[]= "Hello";
	char src1[] = "Bluee";
	TEST(test_strncpy(dest1, src1, 5));

	//Test 1 - Dest is smaller with correct size for src
	char dest2[]= "Hel";
	char src2[] = "Bluee";
	TEST(test_strncpy(dest2, src2, 5));

	//Test 2 - Src is smaller with src correct size
	char dest3[]= "Hello";
	char src3[] = "Bl";
	TEST(test_strncpy(dest3, src3, 2));

	//Test 3 - dest is null with src correct size
 	char dest4[0];
	char src4[] = "Bluee";
	TEST(test_strncpy(dest4, src4, 0));

	//Test - src is null (Not Tested since is Undefined Behaviour
	//char dest5[]= "Hello";
	//char *src5 = 0;
	//TEST(test_strncpy(dest5, src5, 0));

	//Test - both are null is undefined behaviour
	//char dest6[0];
	//char src6[0];
	//test_strcpy(dest6, src6);

	//Test - dest smaller is undefined behaviour
	//char dest7[]= "\0";
	//char src7[] = "Bluee";
	//TEST(test_strcpy(dest7, src7));

	//Test 4 - src has \0 and size is correct
	char dest8[]= "Hello";
	char src8[] = "\0";
	TEST(test_strncpy(dest8, src8, 0));

	//Test 5 - non printable chars with correct size
	char dest5[]="Hello";
	char src5[] = "\xC8 \xC9";
	TEST(test_strncpy(dest5, src5, 3));
	
	//Test 6 - non printable chars with size bigger than src len
	char dest6[]="Hello";
	char src6[] = "A";
	TEST(test_strncpy(dest6, src6, 5));

	//Test 7 - non printable chars with size smaller than src len
	char dest7[]="Hello";
	char src7[] = "ABC";
	TEST(test_strncpy(dest7, src7, 2));



	end_test();
}
