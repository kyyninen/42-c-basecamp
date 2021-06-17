/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_match.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 16:49:15 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/06 20:18:01 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "match.h"

int main(void)
{
    char *match_a[] = {"Hello World!",
                        "Hello World!",
                        "Hello World!",
                        "Hello World!",
                        "Hello World!",
                        "Hello World!",
                        "Hello World!",
                        "Hello World!",
                        "Hello World!",
                        "Hello World!",
                        "Hello World!",
                        "Hello World!",
                        "main.c",
                        "Hello World!", 0};
 
    char *match_b[] = {"Hello *",
                        "* World!",
                        "Heww*orld!",
                        "*****ello World****",
                        "Hel*******o******ld!",
                        "Hel* Wo*d!",
                        "He*wo Wo*d!",
                        "**H**e**l**l**o** **W**o**r**l**d**!**",
                        "He*g*lo Wo*r*d*d*!",
                        "*a",
                        "*o",
                        "*!",
                        "*.c",
                        "He*o Workd!", 0};
 
    int i;
 
    i = 0;
    while (match_a[i] != 0)
    {
        while (match_b[i] != 0)
        {
            printf("Do %s and %s match? %d\n", match_a[i], match_b[i], match(match_a[i], match_b[i]));
            i++;;
        }
    }
 
}