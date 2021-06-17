/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:22:56 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 17:06:29 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

void	ft_putchar(int fd, char c);
void	ft_putstr(int fd, char *str);
void	ft_putnbr(int fd, int nb);
void	print_error(char *file, int err);
char	*str_error(int err);
int		cat_files(char **files);
int		cat_input(void);
#endif