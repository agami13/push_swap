/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:52:27 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/27 18:46:17 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>

// stack structure
typedef struct n_list
{
	int				content;
	int				index;
	struct n_list	*next;
}					t_stack;

typedef struct s_chunk
{
	int				start;
	int				end;
	int				*array;
}					t_chunk;

// instructions
int				ft_swap(t_stack **stack);
int				ft_push(t_stack **stack1, t_stack **stack2);
int				ft_rotate(t_stack **stack);
int				ft_reverse_rotate(t_stack **stack);

// small sort functions
int				sort_2(t_stack **stack_a);
int				sort_3(t_stack **a);
int				sort_4(t_stack **stack_a,t_stack **stack_b);
int				sort_5(t_stack **stack_a, t_stack **stack_b);

int				update_index(t_stack **stack);
int				find_min_index(t_stack **stack);
int				push_min_to_b(t_stack **a, t_stack **b);
int				push_min_to_b_5(t_stack **a, t_stack **b);

// big sort functions
void			sort(t_stack **a, t_stack **b);
void			push_to_b(t_stack **a, t_stack **b);
void			give_value(int *step, int *i);
int				*bubble_sort(t_stack **stack);
int				*covert_to_arr(t_stack **a, int size);
void			sort_helper(int *i, int *range, t_stack **b, int size);
void			sort_helper2(int *i, int *range, t_stack **b, int size);
// rules
void 			sa(t_stack **stack_a);
void 			sb(t_stack **stack_b);
void 			ss(t_stack **stack_a, t_stack **stack_b);
void 			pa(t_stack **stack_a, t_stack **stack_b);
void 			pb(t_stack **stack_a, t_stack **stack_b);
void 			ra(t_stack **stack_a);
void 			rb(t_stack **stack_b);
void 			rr(t_stack **stack_a, t_stack **stack_b);
void 			rra(t_stack **stack_a);
void 			rrb(t_stack **stack_b);
void 			rrr(t_stack **stack_a, t_stack **stack_b);

// helper funcs
void			ft_listclear(t_stack **list);
void			ft_listdelone(t_stack *list);
char			**spliting_nums(char **av);
char			**free_strs(char **strs);
char			*split_helper(char *str, char **av);
int				ft_numlen(char **str);
int				stack_sorted(t_stack **stack);
int				list_size(t_stack **stack);
long long		ft_atol(const char *str);

// checker structure
int				checker(char **av);
int				checker2(char *av);
int				checker3(char **av);
int				dup_check(char **av);
int				nill_check(char **av);
int				dup_check2(int *array, int len);
int				is_sorted(char **str);
int				empty_space_check(char **str);

// node functions
void			add_node_to_list(t_stack **list, t_stack *stack, int index);
t_stack			*stack_fill(char **argv);
t_stack			*create_node(int content);
t_stack			*find_biggest(t_stack *stack);

#endif