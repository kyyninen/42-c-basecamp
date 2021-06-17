/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:44:19 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 17:14:51 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "ft_cat.h"

int		main(int ac, char **av)
{
	int		result;

	if (ac > 1)
	{
		av++;
		result = cat_files(av);
	}
	else
		result = cat_input();
	return (result);
}

int		cat_files(char **files)
{
	char	ch;
	int		errors;

	errors = 0;
	while (*files)
	{
		if (open(*files, O_RDONLY) == 3)
		{
			while (read(3, &ch, sizeof(char)) != 0)
				ft_putchar(1, ch);
			close(3);
		}
		else
		{
			print_error(*files, errno);
			errors += 1;
		}
			
		files++;
	}
	return (errors);
}

int		cat_input(void)
{
	char	buf[30720];
	
	while(1)
	{
		read(0, buf, 30720);
		ft_putstr(1, buf);
	}
	return (0);
}

void	print_error(char *file, int err)
{
	(void)err;
	ft_putstr(2, "cat: ");
	ft_putstr(2, file);
	ft_putstr(2, ": ");
	ft_putstr(2, str_error(err));
	ft_putchar(2, '\n');
}

char	*str_error(int err)
{
	if (err == 2)
		return ("No such file or directory");
	if (err == 13)
		return ("Permission denied");
	if (err == 20)
		return ("Not a directory");
	if (err == 42)
		return ("ARE U A WIZARD");
	ft_putnbr(2, err);
	ft_putchar(2, ' ');
	return ("Unknown error");
}mkdi