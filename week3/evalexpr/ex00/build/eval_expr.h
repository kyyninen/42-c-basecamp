/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 19:39:52 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/12 20:05:48 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

typedef struct		s_node
{
	struct s_node	*left;
	struct s_node	*right;
	char			*val;
}					t_node;

int		ft_atoi(char *str);
char	*skip_whitespace(char *str);
#endif