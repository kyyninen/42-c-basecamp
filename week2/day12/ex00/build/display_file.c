/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 07:29:58 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 11:17:19 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr(int fd, char *str)
{
	while (*str)
		ft_putchar(fd, *(str++));
}

int		main(int ac, char **av)
{
	int		fd;
	int		seek;
	char	ch;

	fd = -1;
	seek = 0;
	if (ac < 2)
		ft_putstr(2, "File name missing.\n");
	else if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == 3)
		{
			seek = read(fd, &ch, sizeof(char));
			while (seek != 0)
			{
				ft_putchar(1, ch);
				seek = read(fd, &ch, 1);
			}
			close(fd);
		}
	}
	else if (ac > 2)
		ft_putstr(2, "Too many arguments.\n");
	return (0);
}
