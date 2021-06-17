/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 20:06:48 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/03 20:26:16 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstr(char *str);

void	ft_print_words_tables(char **tab)
{
	int		index;

	index = 0;
	while (tab[index] != 0)
	{
		ft_putstr(tab[index]);
		ft_putchar('\n');
		index++;
	}
}

void	ft_putstr(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		ft_putchar(str[index++]);
}
