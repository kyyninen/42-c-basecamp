/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:56:02 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 15:37:49 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char	test1a[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test1b[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test2a[] = "The ships hung in dsf sky in much the same way that bricks don\'t.";
	char	test2b[] = "The swips hung in the sky in much the same way that bricks don\'t.";
	char	test3a[] = "The ships hung in";
	char	test3b[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test4a[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test4b[] = "The ships hung";

	printf("Testing with identical strings of same length:\n");
	printf("strncmp(20): %d, ft_strncmp(20): %d\n\n", strncmp(test1a, test1b, 20), ft_strncmp(test1a, test1b, 20));
	printf("Testing with differing strings of same length:\n");
	printf("strncmp(20): %d, ft_strncmp(20): %d\n\n", strncmp(test2a, test2b, 20), ft_strncmp(test2a, test2b, 20));
	printf("Testing with shorter s1:\n");
	printf("strncmp(20): %d, ft_strncmp(20): %d\n\n", strncmp(test3a, test3b, 20), ft_strncmp(test3a, test3b, 20));
	printf("Testing with shorter s2:\n");
	printf("strncmp(20): %d, ft_strncmp(20): %d\n\n", strncmp(test4a, test4b, 20), ft_strncmp(test4a, test4b, 20));
}
