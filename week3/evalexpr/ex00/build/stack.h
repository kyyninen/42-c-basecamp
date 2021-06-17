/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:39:02 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 06:40:10 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct 		s_stack {
	int	top;
	unsigned int	capacity;
	char**			array;
}					t_stack;

t_stack		*t_stack_create(unsigned int cap);
int			t_stack_is_full(t_stack *stack);
int			t_stack_is_empty(t_stack *stack);
void		t_stack_push(t_stack *stack, char* item);
char*		t_stack_pop(t_stack *stack);
char*		t_stack_peek(t_stack *stack);
#endif
