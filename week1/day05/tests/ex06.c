/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:56:02 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 15:38:48 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	test1a[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test1b[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test2a[] = "The ships hung in dsf sky in much the same way that bricks don\'t.";
	char	test2b[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test3a[] = "The ships hung in";
	char	test3b[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test4a[] = "The ships hung in the sky in much the same way that bricks don\'t.";
	char	test4b[] = "The ships ";
	char	test42a[] = "Gxn jeh\ayf ggegwv\boji wvpvs\fpijdaf Vtw\nmqtiio\rsf clukoprgn\tyt zixiwdfd\vohyyjkjrp Sksyyorqxjvywf tks";
	char	test42b[] = "Gxn jeh\ayf ggegwv\boji wvpvs\fpijdaf Vtw\nmqtiio\rsf clukoprgn\tyt zixiwdfd\vohyyjkjrp Sksyyorqxjvywf tks";
	char	test43a[] = "Gxn jeh\ayf ggegwv\boji wvpvs\fpijdaf Vtw\nmqtiio\rsf clukoprgn\tyt zixiwdfd\vohyyjkjrp Sksyyorqxjvywf tks";
	char	test43b[] = "Gxn jeh\ayf ggegwv\boji wvpvs\fpijdaf Vtw\nmqtiio\rsf clukoprgnyt zix\tkwdfd\vohyyjkjrp Sksyyorqxjvywf tks";
	char	test44a[] = "Hello";
	char	test44b[] = "World";

	printf("Testing with identical strings of same length:\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp(test1a, test1b), ft_strcmp(test1a, test1b));
	printf("Testing with differing strings of same length:\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp(test2a, test2b), ft_strcmp(test2a, test2b));
	printf("Testing with shorter s1:\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp(test3a, test3b), ft_strcmp(test3a, test3b));
	printf("Testing with shorter s2:\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp(test4a, test4b), ft_strcmp(test4a, test4b));
	printf("Testing identical strings with special characters:\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp(test42a, test42b), ft_strcmp(test42a, test42b));
	printf("Testing differing strings with special characters:\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp(test43a, test43b), ft_strcmp(test43a, test43b));
	printf("Testing string literals \"Hello\" and \"World\":\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp("Hello", "World"), ft_strcmp("Hello", "World"));
	printf("Testing char arrays containing \"Hello\" and \"World\":\n");
	printf("strcmp: %d, ft_strcmp: %d\n\n", strcmp(test44a, test44b), ft_strcmp(test44a, test44b));
	return (0);
}
