/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:44:41 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/04 20:40:49 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split_whitespaces(char *str);

void	print_str_arr(char **str_arr)
{
	int			index;
	
	index = 0;
	printf("[---\n");
	while (str_arr[index] != 0)
	{
		printf("%d:[%s]\n",index, str_arr[index]);
		index++;
	}
	printf("%d:[%s]\n",index, str_arr[index]);
	printf("---]\n");
}

void	test_split(char *str)
{
	char	**result;

	result = ft_split_whitespaces(str);
	print_str_arr(result);
	free(result);
}

int		main(void)
{
	test_split(
		"The ships hung in the sky in much the same way that bricks don\'t.");
	return (0);
}
