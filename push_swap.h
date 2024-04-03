/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:52:27 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/03 04:23:52 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>

// stack structure
typedef struct n_list
{
	int				content;
	int				index;
	struct n_list	*next;
	struct n_list	*prev;
}					t_stack;

// helper funcs
long long		ft_atol(const char *str);
void			ft_listclear(t_stack **list);
void			ft_listdelone(t_stack *list);
char			**spliting_nums(char **av);
char			**free_strs(char **strs);
int				ft_numlen(char **str);
char			*split_helper(char *str, char **av);

// checker structure
int				checker(char **av);
int				checker2(char *av);
int				checker3(char **av);
int				dup_check(char **av);
int				nill_check(char **av);
int				dup_check2(int *array, int len);

// node functions
void			add_node_to_list(t_stack **list, t_stack *stack, int index);
t_stack			*stack_fill(char **argv);
t_stack			*create_node(int content);

#endif