/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:00:03 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/02 20:19:45 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int		ft_strcmp(char *s1, char *s2)
{
	int index;
	int result;

	index = 0;
	result = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		result = s1[index] - s2[index];
		if (result != 0)
			return (result);
		index++;
	}
	return (s1[index] - s2[index]);
}

void	str_bubblesort(char *str_arr[], int size)
{
	int		step;
	int		index;
	char	*temp;

	step = 0;
	while (step < size - 1)
	{
		index = 0;
		while (index < size - step - 1)
		{
			if (ft_strcmp(str_arr[index], str_arr[index + 1]) > 0)
			{
				temp = str_arr[index];
				str_arr[index] = str_arr[index + 1];
				str_arr[index + 1] = temp;
			}
			index++;
		}
		step++;
	}
}

int		main(int argc, char *argv[])
{
	int index;

	index = 1;
	if (argc > 1)
	{
		str_bubblesort(argv + 1, argc - 1);
		while (index < argc)
		{
			ft_putstr(argv[index]);
			ft_putchar('\n');
			index++;
		}
	}
	return (0);
}
