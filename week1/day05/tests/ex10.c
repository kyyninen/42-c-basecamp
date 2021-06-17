/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:22:36 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/01 16:52:58 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int		print_sample_row(char *test, char *answer)
{
	printf("%s\n", test);
	printf("%s\n", ft_strcapitalize(test));
	if (strcmp(test, answer) == 0)
	{
		printf("Diff OK :D\n\n");
		return (0);
	}
	else
	{
		printf("KO D:\n\n");
		return (1);
	}
}

int		main(void)
{
	char	test1a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	test1b[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
	char	test2a[] = "gxnjehyfGGEgwvojiwvpvspijdaf vtwmqTIIOSfclukoprgnytzixiwdfdohyyjkjrp sksyyorqxJVYWftks";
	char	test2b[] = "Gxnjehyfggegwvojiwvpvspijdaf Vtwmqtiiosfclukoprgnytzixiwdfdohyyjkjrp Sksyyorqxjvywftks";
	char	test3a[] = "vcqhpvgwrthzkhshdcvseawhodlmkqitijmh impqbifqdQOJhniuxhzxymozeochvkacsew";
	char	test3b[] = "Vcqhpvgwrthzkhshdcvseawhodlmkqitijmh Impqbifqdqojhniuxhzxymozeochvkacsew";
	char	test4a[] = "rekt17+lol mdr mdr 4242l42";
	char	test4b[] = "Rekt17+Lol Mdr Mdr 4242l42";
	char	test5a[] = "NULL";
	char	test5b[] = "Null";
	char	test42[] = "Gxn jeh\ayf ggegwv\boji wvpvs\fpijdaf Vtw\nmqtiio\rsf clukoprgn\tyt zixiwdfd\vohyyjkjrp Sksyyorqxjvywf tks";

	print_sample_row(test1a, test1b);
	print_sample_row(test2a, test2b);
	print_sample_row(test3a, test3b);
	print_sample_row(test4a, test4b);
	print_sample_row(test5a, test5b);
	
	printf("%s\n", test42);
	ft_strcapitalize(test42);
	printf("%s\n", test42);
}
