/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 08:12:00 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/03 06:02:33 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char		*ft_strdup(char *src);

int			print_sample_row(char *src, char *target)
{
	printf("%s\n%s\n", src, target);
	return (strcmp(src, target));
}

int			main(void)
{
	char		source1[] = "\"Forty-two,\" said Deep Thought, with infinite majesty and calm.";
	char		source2[] = "Gxn jeh\ayf ggegwv\boji wvpvs\fpijdaf Vtw\nmqtiio\rsf clukoprgn\tyt zixiwdfd\vohyyjkjrp Sksyyorqxjvywf tks";
	char		source3[] = "8786gsr7486sdgg68sdfg65sd8ersdgs\n\n\n\n¤%%&¤E%%/()==¤%%*/E¤%%)";
	char		source4[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	char		*target;
	int			score;
	
	score = 0;
	target = ft_strdup(source1);
	score += print_sample_row(source1, target);
	free(target);
	target = ft_strdup(source2);
	score += print_sample_row(source2, target);
	free(target);
	target = ft_strdup(source3);
	score += print_sample_row(source3, target);
	free(target);
	target = ft_strdup(source4);
	score += print_sample_row(source4, target);
	free(target);
	if (score == 0)
		printf("\nDiff OK :D\n");
	else
		printf("\nKO D:\n");
	return (0);
}
