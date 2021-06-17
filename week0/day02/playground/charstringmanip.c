/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charstringmanip.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:14:43 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/26 13:29:55 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	replace_first_h_with_y(char *str)
{
	str[0] = 'y';
}

int		main(void)
{
	char str1[] = "Hello";
	
	ft_putstr(str1);
	ft_putchar('\n');
	return 0;
}
