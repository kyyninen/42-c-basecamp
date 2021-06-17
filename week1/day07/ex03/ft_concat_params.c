/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 08:26:51 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/03 16:42:13 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *str);

char			*ft_concat_params(int argc, char **argv)
{
	int		arg_index;
	int		str_index;
	int		res_index;
	int		size;
	char	*result;

	arg_index = 1;
	size = 0;
	while (arg_index < argc)
		size += ft_strlen(argv[arg_index++]);
	result = malloc(size + 1);
	res_index = 0;
	arg_index = 1;
	while (arg_index < argc && res_index < size)
	{
		str_index = 0;
		while (argv[arg_index][str_index])
			result[res_index++] = argv[arg_index][str_index++];
		arg_index++;
		if (arg_index < argc)
			result[res_index++] = '\n';
	}
	return (result);
}

unsigned int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}
