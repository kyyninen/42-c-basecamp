/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:44:41 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/03 20:17:03 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int		main(void)
{
	char	test1[] =
	"The ships hung in the sky in much the same way that bricks don\'t.";
	char		**result1;
	char	test2[] =
	"Three words here";
	char		**result2;
	char	test3[] =
	"Four                   wor\t\t\tds\n\n\n\n\n\n\n\n\n\n here";
	char		**result3;
	char	test4[] =
	"      Four                   wor\t\t\tds\n\n\n\n\n\n\n\n\n\n here";
	char		**result4;

	result1 = ft_split_whitespaces(test1);
	print_str_arr(result1);
	result2 = ft_split_whitespaces(test2);
	print_str_arr(result2);
	result3 = ft_split_whitespaces(test3);
	print_str_arr(result3);
	result4 = ft_split_whitespaces(test4);
	print_str_arr(result4);
	return (0);
}
