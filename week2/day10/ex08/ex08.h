/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:56:44 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/08 19:48:57 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX07_H
# define EX07_H

char	**ft_split_whitespaces(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));
#endif