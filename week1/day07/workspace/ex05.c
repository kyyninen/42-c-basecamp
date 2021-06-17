/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:44:41 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/03 20:23:55 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

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
	ft_print_words_tables(result1);
	result2 = ft_split_whitespaces(test2);
	ft_print_words_tables(result2);
	result3 = ft_split_whitespaces(test3);
	ft_print_words_tables(result3);
	result4 = ft_split_whitespaces(test4);
	ft_print_words_tables(result4);
	return (0);
}
