/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 21:25:35 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/27 21:30:42 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	sort(t_stack **a, t_stack **b)
{
	if (list_size(a) == 2)
		return (sort_2(a));
	else if (list_size(a) == 3)
		return (sort_3(a));
	else if (list_size(a) == 4)
		return (sort_4(a));
	else if (list_size(a) == 5)
		return (sort_5(a));
	push_to_b(a, b);
	return (0);
}