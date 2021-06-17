/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:47:11 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 19:49:31 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_str_ptr(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	str_ptr_bubblesort(char **strs, int size, int (*cmp)(char *, char *))
{
	int		step;
	int		i;

	step = 0;
	while (step < size - 1)
	{
		i = 0;
		while (i < size - step - 1)
		{
			if (cmp(*(strs + i), *(strs + i + 1)) > 0)
				swap_str_ptr(strs + i, strs + i + 1);
			i++;
		}
		step++;
	}
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int size;

	size = 0;
	while (*(tab + size) != 0)
		size++;
	str_ptr_bubblesort(tab, size, cmp);
}
