/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 08:49:27 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/02 23:42:58 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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