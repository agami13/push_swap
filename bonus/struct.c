/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:09:31 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/03 21:18:49 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

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

	i = ft_numlen(argv) - 1;
	stack = NULL;
	head = NULL;
	while (i >= 0)
	{
		stack = create_node(ft_atol(argv[i]));
		if (!stack)
		{
			ft_listclear(&head);
			return (NULL);
		}
		add_node_to_list(&head, stack, i);
		i--;
	}
	return (head);
}

void	ft_listdelone(t_stack *list)
{
	if (!list)
		return ;
	free(list);
}

void	ft_listclear(t_stack **list)
{
	t_stack	*temp;
	t_stack	*n;

	n = *list;
	if (!list)
		return ;
	while (n)
	{
		temp = n -> next;
		ft_listdelone(n);
		n = temp;
	}
	*list = NULL;
}
