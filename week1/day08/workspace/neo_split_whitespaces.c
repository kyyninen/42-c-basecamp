/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   neo_split_whitespaces.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:40:22 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/05 06:54:05 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			count_words(char *str);
char		*skip_whitespace(char *str);
char		*skip_words(char *str);
char		**cut_word_and_append(char *str, char **str_arr);

char		**ft_split_whitespaces(char *str)
{
	char	**str_arr;
	int		words;
	
	words = count_words(str);
	str_arr = (char**)malloc((words + 1) * sizeof(char *));
	str_arr = cut_word_and_append(str, str_arr);
	*str_arr = NULL;
	return (str_arr);
}

int			count_words(char *str)
{
	int		words;

	words = 0;
	while(*str != '\0')
	{
		str = skip_whitespace(str);
		if (*str != '\0')
		{
			words++;
			str = skip_words(str);
		}
	}
	printf("found %d words\n", words);
	return words;
}

char		*skip_whitespace(char *str)
{
	while ((*str == ' ' || *str == '\t' || *str == '\n') && *str != '\0')
		str++;
	return str;
}

char		*skip_words(char *str)
{
	while ((*str != ' ' && *str != '\t' && *str != '\n') && *str != '\0')
		str++;
	return str;
}

char		**cut_word_and_append(char *str, char **str_arr)
{
	char	*word;
	int		word_len;

	str = skip_whitespace(str);
	if (*str == '\0')
		return (str_arr);
	word_len = skip_words(str) - str;
	printf(" word_len is %d \"", word_len);
	word = (char*)malloc((word_len + 1) * sizeof(char));
	while (str != skip_words(str))
	{
		printf("%c", *str);
		printf("%c", *word);
		*word = 'F';
		str++;
	}
	*(word + 1) = 'E';
	*(word + 2) = '\0';
	printf("\" -> %s]", word);
	return (str_arr);
}