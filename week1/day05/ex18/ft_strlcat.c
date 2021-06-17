/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:50:40 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 18:48:15 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int src_len;
	unsigned int index;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	index = 0;
	while (src[index] != '\0' && dest_len + index < size - 1)
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest_len + src_len);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}
