/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:58:46 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/27 20:25:29 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_combn(int n);
int		ft_putchar(char ch);

int		main(void)
{
	ft_print_combn(1);
	ft_putchar('/n');
	ft_print_combn(2);
	ft_putchar('/n');
	ft_print_combn(4);
	ft_putchar('/n');
	ft_print_combn(8);
	ft_putchar('/n');
	return (0);
}
