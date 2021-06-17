/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 20:07:02 by tpolonen          #+#    #+#             */
/*   Updated: 2021/05/31 20:24:59 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	int				result;

	index = 0;
	result = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (index >= n)
			break ;
		result = s1[index] - s2[index];
		if (result != 0)
			return (result);
		index++;
	}
	return (s1[index] - s2[index]);
}
