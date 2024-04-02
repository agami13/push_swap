/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 08:49:27 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/02 08:59:17 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	del(int content)
{
	content = 0;
}

void	ft_listdelone(t_stack *list, void (*del)(int))
{
	if (!list || !del)
		return ;
	del(list -> content);
	free(list);
}

void	ft_listclear(t_stack **list, void (*del)(int))
{
	t_stack	*temp;
	t_stack	*n;

	n = *list;
	if (!del || !list)
		return ;
	while (n)
	{
		temp = n -> next;
		ft_listdelone(n, del);
		n = temp;
	}
	*list = NULL;
}