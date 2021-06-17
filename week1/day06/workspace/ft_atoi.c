/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 13:32:14 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 13:40:50 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		skip_whitespace(char *str);

int		ft_atoi(char *str)
{
	int index;
	int result;
	int sign;

	index = skip_whitespace(str);
	result = 0;
	sign = 1;
	if (str[index] == '+')
		index++;
	else if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			break ;
		result = result * 10 + str[index] - '0';
		index++;
	}
	if (result > 0 && sign < 0 && result != -2147483648)
		result *= sign;
	return (result);
}

int		skip_whitespace(char *str)
{
	int index;

	index = 0;
	while (str[index] == ' ' || str[index] == '\n')
		index++;
	return (index);
}
