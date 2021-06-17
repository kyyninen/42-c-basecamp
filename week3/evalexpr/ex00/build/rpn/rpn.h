/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:50:06 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 07:52:13 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
# define RPN_H

typedef struct 		s_stack {
	int	top;
	unsigned int	capacity;
	char**			array;
}					t_stack;

t_stack				*t_stack_create(unsigned int cap);
int					t_stack_is_empty(t_stack *stack);
void				t_stack_push(t_stack *stack, char* item);
char*				t_stack_pop(t_stack *stack);
char*				t_stack_peek(t_stack *stack);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
int					ft_strcat(char *target, char *source);
char				*ft_reset_str(char *str);
int					ft_is_whitespace(char ch);
int					rpn_get_op_value(char op);
void				rpn_close_brackets(char *output, t_stack *stack);
void				rpn_add_operator(char *output, t_stack *stack, char *op);
char				*rpn_cut_token(char *output, char *str);
char				*rpn_empty_stack(char *output, t_stack *stack);
int					ft_atoi(char *str);
char				*ft_skip_whitespace(char *str);
#endif