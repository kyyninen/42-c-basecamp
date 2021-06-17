/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:43:40 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/06 20:19:10 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_wildcard(char *str)
{
	while (*str)
	{
		if (*str != '*')
			return (0);
		str++;
	}
	return (1);
}

int		match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '\0' && check_wildcard(s2) == 0)
		return (0);
	if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (match(s1 + 1, s2) == 1) || (match(s1, s2 + 1) == 1);
	return (0);
}
