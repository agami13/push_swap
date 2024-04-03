/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 23:54:00 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/03 04:21:19 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_node(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}

void	add_node_to_list(t_stack **list, t_stack *stack, int index)
{
	if (!list || !stack)
		return ;
	stack -> next = *list;
	*list = stack;
	stack -> index = index;
}

t_stack	*stack_fill(char **argv)
{
	int		i;
	t_stack	*stack;
	t_stack	*head;

	i = 0;
	stack = NULL;
	head = NULL;
	while (i < ft_numlen(argv))
	{
		stack = create_node(ft_atoi(argv[i]));
		if (!stack)
		{
			ft_listclear(&head);
			return (NULL);
		}
		add_node_to_list(&head, stack, i);
		i++;
	}
	return (head);
}
