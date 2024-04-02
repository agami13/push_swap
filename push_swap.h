/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:52:27 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/01 00:46:48 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdlib.h>

// stack structure
typedef struct n_list
{
	int			content;
	int			index;
	struct n_list	*next;
	struct n_list	*prev;
}					t_stack;

// checker structure
int			checker(char **av, int ac);
int			checker2(char *av);
int			checker3(char *av);
int			dup_check(char **av, int ac);

// node functions
void		add_node_to_list(t_stack **list, t_stack *stack, int index);
t_stack		*stack_fill(char **argv, int argc);
t_stack		*create_node(int content);



#endif