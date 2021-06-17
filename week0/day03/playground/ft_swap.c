/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:22:51 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/28 16:23:50 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_swap(int *a, int *b)
{
	int buf;

	buf = *a;
	*a = *b;
	*b = buf;
}
