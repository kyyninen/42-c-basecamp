/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 15:25:41 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/03 18:39:29 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		match_ascii(char ch, const char *ascii);
int		count_words(char *str);
int		skip_str(char *str, int index, const char *to_skip);
char	*cut_word(char *str, int index);

char	**ft_split_whitespaces(char *str)
{
	char		**result;
	int			result_size;
	int			word_count;
	int			str_index;
	const char	whitespace[] = " \t\n";

	word_count = count_words(str);
	result = (char **)malloc(word_count * sizeof(char *));
	printf("%d words detected\n", word_count);
	str_index = 0;
	result_size = 0;
	while (word_count > 0 && str[str_index])
	{
		str_index = skip_str(str, str_index, whitespace);
		if (match_ascii(str[str_index + 1], whitespace) == 0)
			{
				result[result_size++] = cut_word(str, str_index);
				str_index++;
				word_count--;
			}
		else
			str_index++;
	}
	return (result);
}

char	*cut_word(char *str, int index)
{
	char 		*result;
	int			word_len;
	
	word_len = skip_str(str, index, '')
		
}

int		count_words(char *str)
{
	int			index;
	int			word_count;
	const char	whitespace[] = " \t\n";

	index = 0;
	word_count = 1;
	while (str[index])
	{
		if (match_ascii(str[index], whitespace) == 1 &&
		match_ascii(str[index + 1], whitespace) == 0)
			word_count++;
		index++;
	}
	return (word_count);
}

int		skip_str(char *str, int index, const char *to_skip)
{
	while (match_ascii(str[index], to_skip) == 1 && str[index])
		index++;
	return (index);
}

int		match_ascii(char ch, const char *ascii)
{
	int		index;

	index = 0;
	while (ascii[index])
	{
		if (ascii[index] == ch)
			return (1);
		index++;
	}
	return (0);
}

