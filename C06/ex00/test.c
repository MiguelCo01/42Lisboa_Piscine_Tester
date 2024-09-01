/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimelo-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:17:11 by mimelo-d          #+#    #+#             */
/*   Updated: 2024/09/01 14:18:24 by mimelo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../00.Core/core.c"

int	main(TEST_ARGS)
{
	BEGIN_TEST;
	TEST(ASSERT_STDOUT("main", "Should print main 'this is the program name'"));
	END_TEST;
}
