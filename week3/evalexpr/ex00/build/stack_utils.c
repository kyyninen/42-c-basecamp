/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 20:41:05 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 06:43:22 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

t_stack		*t_stack_create(unsigned int cap)
{
	t_stack *new;

	new = (t_stack*)malloc(sizeof(t_stack));
	new->capacity = cap;
	new->top = -1;
	new->array = (char **)malloc(new->capacity * sizeof(char *));
	return new;
}

int			t_stack_is_empty(t_stack *stack)
{
	return (stack->top == -1);
}

void		t_stack_push(t_stack *stack, char* item)
{
	if (t_stack_is_full(stack))
		return ;
	stack->array[++stack->top] = item;
	printf("[%s] pushed into stack\n", item);
}

char		*t_stack_pop(t_stack *stack)
{
	char *item;

	item = NULL;
	if (t_stack_is_empty(stack))
		return (item);
	item = stack->array[stack->top];
	stack->array[stack->top] = NULL;
	stack->top--;
	return (item);
}

char		*t_stack_peek(t_stack *stack)
{
	if (t_stack_is_empty(stack))
		return (NULL);
	return (stack->array[stack->top]);
}
