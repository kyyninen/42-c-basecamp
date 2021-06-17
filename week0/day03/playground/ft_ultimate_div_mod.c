/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:41:06 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/28 19:06:04 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int nr1;
	int nr2;

	nr1 = *a;
	nr2 = *b;
	*a = nr1 / nr2;
	*b = nr1 % nr2;
}
