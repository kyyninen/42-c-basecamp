/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:47:11 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 19:29:59 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		s1++;
		s2++;
		if (*s1 == '\0')
			return (*s1 - *s2);
	}
	return (*s1 - *s2);
}

void	swap_str_ptr(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	str_ptr_bubblesort(char **str_arr, int size)
{
	int		step;
	int		i;

	step = 0;
	while (step < size - 1)
	{
		i = 0;
		while (i < size - step - 1)
		{
			if (ft_strcmp(*(str_arr + i), *(str_arr + i + 1)) > 0)
				swap_str_ptr(str_arr + i, str_arr + i + 1);
			i++;
		}
		step++;
	}
}

void	ft_sort_wordtab(char **tab)
{
	int size;

	size = 0;
	while (*(tab + size) != 0)
		size++;
	str_ptr_bubblesort(tab, size);
}
