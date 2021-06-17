/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_split_whitespaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 15:35:10 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/04 19:07:39 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		count_words(char *str);
int		is_whtspc(char c);
char	*cut_word(char *str, int index);

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		sr_index;
	int		res_index;

	sr_index = 0;
	res_index = 0;
	result = (char **)malloc((count_words(str) + 1) * sizeof(char *));
	if (is_whtspc(str[sr_index]) == 0 && str[sr_index])
		result[res_index++] = cut_word(str, sr_index);
	while (str[sr_index])
	{
		if (is_whtspc(str[sr_index]) == 1 && is_whtspc(str[sr_index + 1]) == 0)
			result[res_index++] = cut_word(str, sr_index + 1);
		sr_index++;
	}
	result[res_index] = NULL;
	return (result);
}

int		count_words(char *str)
{
	int 	i;
	int 	count;

	i = 0;
	count = (is_whtspc(str[i]) == 0 && str[i]) ? 1 : 0;
	while (str[i])
	{
		if (is_whtspc(str[i]) == 1 && is_whtspc(str[i + 1]) == 0)
			count++;
		i++;
	}
	printf("word count %d\n", count);
	return (count);
}

int		is_whtspc(char c)
{
	return ((c == ' ' || c == '\t' || c == '\n') ? 1 : 0);
}

char	*cut_word(char *str, int index)
{
	int		word_len;
	int		word_index;
	char	*word;

	word_len = 0;
	word_index = 0;
	printf("first character: [%c] word is ", str[index]);
	while(is_whtspc(str[index] == 0) && str[index])
	{
		word_len++;
		index++;
	}
	index -= word_len;
	word = (char *)malloc((word_len + 1) * sizeof(char));
	while (word_index < word_len)
		word[word_index++] = str[index++];
	word[word_index] = '\0';
	printf("%s\n", word);
	return (word);
}
