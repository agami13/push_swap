/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 08:48:15 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/03 10:15:33 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	small_sort(t_stack **stack_a, int size)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
}

int	sort_2(t_stack **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
	return (0);
}

int	sort_3(t_stack **stack_a)
{
	small_sort(stack_a, 3);
	return (0);
}

int	sort_4(t_stack **stack_a)
{
	small_sort(stack_a, 4);
	return (0);
}

int sort_5(t_stack **stack_a)
{
	small_sort(stack_a, 5);
	return (0);
}