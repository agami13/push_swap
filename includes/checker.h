/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:05:33 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/03 22:07:13 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"

typedef struct n_list
{
	int				content;
	int				index;
	struct n_list	*next;
}					t_stack;

// instructions
int					ft_swap(t_stack **stack);
int					ft_push(t_stack **stack1, t_stack **stack2);
int					ft_rotate(t_stack **stack);
int					ft_reverse_rotate(t_stack **stack);

// rules
void				sa(t_stack **stack_a);
void				sb(t_stack **stack_b);
void				ss(t_stack **stack_a, t_stack **stack_b);
void				pa(t_stack **stack_a, t_stack **stack_b);
void				pb(t_stack **stack_a, t_stack **stack_b);
void				ra(t_stack **stack_a);
void				rb(t_stack **stack_b);
void				rr(t_stack **stack_a, t_stack **stack_b);
void				rra(t_stack **stack_a);
void				rrb(t_stack **stack_b);
void				rrr(t_stack **stack_a, t_stack **stack_b);

// helper funcs
void				ft_listclear(t_stack **list);
void				ft_listdelone(t_stack *list);
char				**spliting_nums(char **av);
char				**free_strs(char **strs);
char				*split_helper(char *str, char **av);
int					ft_numlen(char **str);
int					stack_sorted(t_stack **stack);
int					list_size(t_stack **stack);
long long			ft_atol(const char *str);

// checker structure
int					parsing(t_stack **a, char **str);
int					checker(char **av);
int					checker2(char *av);
int					checker3(char **av);
int					dup_check(char **av);
int					nill_check(char **av);
int					dup_check2(int *array, int len);
int					is_sorted(char **str);
int					empty_space_check(char **str);
void				error(void);
int					do_instructions(t_stack **a, t_stack **b, char *line);
void				input(t_stack **a, t_stack **b);
void				main_helper(t_stack **a, t_stack **b);
// node functions
void				add_node_to_list(t_stack **list, t_stack *stack, int index);
t_stack				*stack_fill(char **argv);
t_stack				*create_node(int content);
t_stack				*find_biggest(t_stack *stack);

#endif