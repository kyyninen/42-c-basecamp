/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 21:18:46 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 08:35:38 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		desc_order(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(*(tab + i), *(tab + i + 1)) <= 0)
			return (0);
		i++;
	}
	return (1);
}

int		asc_order(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(*(tab + i), *(tab + i + 1)) >= 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (asc_order(tab, length, f) || desc_order(tab, length, f));
}
