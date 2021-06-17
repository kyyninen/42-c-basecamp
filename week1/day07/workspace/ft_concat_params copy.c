/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 08:26:51 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/03 12:40:12 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str);

char			*ft_concat_params(int argc, char **argv)
{
	int 	arg_index;
	char	*result;

	arg_index = 1;
	size = 0;
	while (arg_index < argc)
	{
		size += ft_strlen(argv[arg_index]) + 1;
		arg_index++;
	}
	result = str_combine(argv + 1, argc - 1, '\n', size);
	return (result);
}

char		*str_combine(char **str_arr, int arr_size, char separator, int res_size)
{
	char	*result;
	int		res_index;
	int		str_index;
	int		arr_index;

	result = malloc(arr_size + 1)
	arr_size = 0;
	res_index = 0;
	while(arr_index < arr_size)
	{
		str_index = 0;
		while (str_arr[arr_index][str_index])
		{
			result[res_index] = str_arr[arr_index][str_index];
			res_index++;
			str_index++;
		}
		result[res_index] = separator;
		res_index++;
		arr_index++;
	}
	return result;
}

unsigned int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}
