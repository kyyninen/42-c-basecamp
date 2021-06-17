/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:50:36 by tpolonen          #+#    #+#             */
/*   Updated: 2021/06/09 18:27:35 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTS_H
# define LISTS_H

t_list		*ft_create_elem(void *data);
void		ft_list_push_back(t_list **begin_list, void *data);
void		ft_list_push_front(t_list **begin_list, void *data);
void		print_str_list(t_list **begin_list);
void		listify_str_arr(t_list **new_list, char **strings, void (*extend_func)(t_list**, void*));
void		ft_list_clear(t_list **begin_list);
#endif