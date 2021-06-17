/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 14:53:31 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/29 17:28:07 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		root_check;

	if (nb <= 2)
	{
		return (0);
	}
	else
	{
		root_check = 1;
		while (root_check * root_check < nb)
		{
			root_check++;
			if (root_check * root_check == nb)
			{
				return (root_check);
			}
		}
		return (0);
	}
}
