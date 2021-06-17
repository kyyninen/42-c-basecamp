/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 18:44:14 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/04 20:27:39 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str);
int		is_whtspc(char c);
char	*cut_word(char *str, int index);

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		index;
	int		result_size;

	index = 0;
	result_size = 0;
	result = (char **)malloc((count_words(str) + 1) * sizeof(char *));
	if (is_whtspc(str[index]) == 0 && str[index])
		result[result_size++] = cut_word(str, index);
	while (str[index])
	{
		if (is_whtspc(str[index]) == 1 &&
		(is_whtspc(str[index + 1]) == 0 && str[index + 1]))
			result[result_size++] = cut_word(str, index + 1);
		index++;
	}
	result[result_size] = 0;
	return (result);
}

int		is_whtspc(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		count_words(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = (is_whtspc(str[i]) == 0 && str[i]) ? 1 : 0;
	while (str[i])
	{
		if (is_whtspc(str[i]) == 1 && is_whtspc(str[i + 1]) == 0)
			count++;
		i++;
	}
	return (count);
}

char	*cut_word(char *str, int index)
{
	int		word_len;
	int		word_index;
	char	*word;

	word_len = 0;
	word_index = 0;
	while (is_whtspc(str[index]) == 0 && str[index])
	{
		word_len++;
		index++;
	}
	index -= word_len;
	word = (char *)malloc((word_len + 1) * sizeof(char));
	while (word_index < word_len)
		word[word_index++] = str[index++];
	word[word_index] = '\0';
	return (word);
}
