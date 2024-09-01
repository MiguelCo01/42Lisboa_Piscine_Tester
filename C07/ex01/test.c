/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:06:14 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/09/01 21:11:39 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../00.Core/core.c"
#include <string.h>
#include <errno.h>
char	*ft_range(int min, int max);



int includes(int *actual, int *expected, unsigned int size)
{
	int i = 0;
	char * msg;
	i = 0;
	while (i < size)
	{
		msg = asprintf(&msg, "Cheking for %d\n", i);
		assert_int(actual[i], expected[i], msg);
		free(msg);
	}
}

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	{
		int *r = ft_range(0, 0);
		
		int *expected = {0};
		assert_prt_not(r, null, "Must not be null");
		includes(ft_range, expected);	

		free(result);
	}
	END_TEST;
}

