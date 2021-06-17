/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:56:02 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 20:06:14 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int index;
	int result;

	index = 0;
	result = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		result = s1[index] - s2[index];
		if (result != 0)
			return (result);			
		index++;
	}

	return (s1[index] - s2[index]);
}

int		main(void)
{
	char	test1a[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test1b[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test2a[] = "The ships hung in dsf sky in much the same way that bricks don\'t.";
	char	test2b[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test3a[] = "The ships hung in";
	char	test3b[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test4a[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test4b[] = "The ships hung in the sky in much the same wa";

	printf("Testing with identical strings of same length:\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp(test1a, test1b), ft_strcmp(test1a, test1b));
	printf("Testing with differing strings of same length:\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp(test2a, test2b), ft_strcmp(test2a, test2b));
	printf("Testing with shorter s1:\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp(test3a, test3b), ft_strcmp(test3a, test3b));
	printf("Testing with shorter s2:\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp(test4a, test4b), ft_strcmp(test4a, test4b));
}
