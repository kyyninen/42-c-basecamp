/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assignment.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:21:16 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/27 12:29:20 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_putchar(char ptr);
int 	ft_putnbr(int ptr);

int		main(void)
{
	int		a;
	int		*ptr;

	a = 3;
	ptr = &a;
	ft_putnbr(*ptr);
	a = 42;
	ft_putchar('\n');
	ft_putnbr(*ptr);
	return (0);
}
