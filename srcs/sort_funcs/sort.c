/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 21:25:35 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/28 00:19:33 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_biggest_to_top(t_stack **b, int size, int *nums)
{
	// int		distance;
	// int		i;
	// t_stack	*temp;

	// temp = find_biggest(*b);
	// distance = temp->content;
	// i = 0;
	// while (temp->content != distance)
	// {
	// 	i++;
	// 	temp = temp->next;
	// }
	// if (i < size / 2)
	// {
	// 	while (i > 0)
	// 	{
	// 		if (arr[size] < (*b)->next->content)
	// 		{
	// 			sb(b);
	// 			break ;
	// 		}
	// 		rb(b);
	// 		distance--;
	// 	}
		
	// }
	// else
	// {
	// 	while (i < size)
	// 	{
	// 		rrb(b);
	// 		i++;
	// 	}
	// }
	int max;
	t_stack *tmp;
	t_stack *tmp2;
	int distance;

	distance = 0;
	tmp2 = find_biggest(*b);
	tmp = *b;
	max = tmp2->content;
	while (tmp->content != max)
	{
		distance++;
		tmp = tmp->next;
	}
	if (distance < list_size(b) / 2)
	{
		while (distance)
		{
			if ((*b)->next->content == nums[size - 1])
			{
				sb(b);
				break;
			}
			rb(b);
			distance--;

		}
	}
	else
	{
		distance = list_size(b) - distance;
		while (distance != 0)
		{
			rrb(b);
			distance--;
		}
	}
}

int	sort(t_stack **a, t_stack **b)
{
	if (list_size(a) == 2)
		return (sort_2(a));
	else if (list_size(a) == 3)
		return (sort_3(a));
	else if (list_size(a) == 4)
		return (sort_4(a, b));
	else if (list_size(a) == 5)
		return (sort_5(a, b));
	sort_stack(a, b);
	return (0);
}