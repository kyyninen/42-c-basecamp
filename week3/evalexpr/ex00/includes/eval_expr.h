/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 06:50:06 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/13 12:04:31 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

typedef struct		s_stack {
	int				top;
	unsigned int	capacity;
	char			**array;
}					t_stack;

t_stack				*t_stack_create(unsigned int cap);
int					t_stack_is_empty(t_stack *stack);
void				t_stack_push(t_stack *stack, char *item);
char				*t_stack_pop(t_stack *stack);
char				*t_stack_peek(t_stack *stack);
void				ft_putnbr(int nb);
void				ft_putchar(char c);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
int					ft_strcat(char *target, char *source);
char				*ft_reset_str(char *str);
int					ft_is_whitespace(char ch);
int					rpn_get_op_value(char op);
void				rpn_close_brackets(t_stack *output, t_stack *stack);
void				rpn_add_operator(t_stack *output, t_stack *stack, char *op);
char				*rpn_cut_token(t_stack *output, char *str);
t_stack				*rpn_empty_stack(t_stack *output, t_stack *stack);
int					eval_npr_stack(t_stack *input);
char				*evaluate(int a, int b, char *op);
int					ft_atoi(char *str);
char				*ft_itoa(int num, char *str);
void				ft_strrev(char *str, int size);
char				*ft_skip_whitespace(char *str);
#endif
