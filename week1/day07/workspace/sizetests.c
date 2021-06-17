/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizetests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 05:15:46 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/03 06:51:42 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	int		test1 = 3246;
	int		test2[] = {100, 42, 15, 999999, -10};
	char	test3 = 'H';
	char	test4[] = "Hello";
	
	printf("Testing sizeof int: %lu\n", sizeof(test1));
	printf("Testing sizeof array of 5 ints: %lu\n", sizeof(test2));
	printf("Testing sizeof char: %lu\n", sizeof(test3));
	printf("Testing sizeof array of 5 chars: %lu\n", sizeof(test4));
	return (0);
}
