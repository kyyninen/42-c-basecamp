/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:08:50 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/29 20:03:41 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int prime_check;

	if (nb < 2)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	prime_check = 3;
	while (prime_check < nb)
	{
		if (nb % prime_check == 0)
		{
			return (0);
		}
		prime_check += 2;
	}
	return (1);
}
