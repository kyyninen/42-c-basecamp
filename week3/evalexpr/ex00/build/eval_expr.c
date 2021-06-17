/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 19:27:53 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/12 20:40:56 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "eval_expr.h"

t_node	*create_node(char *val)
{
	t_node		*new;

	new = malloc(sizeof(t_node));
	new->left = NULL;
	new->right = NULL;
	new->val = val;
	return (new);
}

int		is_leaf(t_node *node)
{
	return (node->left == NULL && node->right == NULL);
}

int		is_operator(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%')
		return (1);
	return (0);
}

int		evaluate(t_node *node)
{
	if (*(node->val) == '+')
		return (evaluate(node->left) + evaluate(node->right));
	if (*(node->val) == '-')
		return (evaluate(node->left) - evaluate(node->right));
	if (*(node->val) == '*')
		return (evaluate(node->left) * evaluate(node->right));
	if (*(node->val) == '/')
		return (evaluate(node->left) / evaluate(node->right));
	if (*(node->val) == '%')
		return (evaluate(node->left) % evaluate(node->right));
	return (ft_atoi(node->val));
}

int		main(void)
{
	t_node		*root;

	root = create_node("+");
	root->left = create_node("1");
	root->right = create_node("*");
	root->right->left = create_node("6");
	root->right->right = create_node("7");
	printf("%d\n", evaluate(root));
	return (0);
}