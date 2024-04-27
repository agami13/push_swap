/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 02:33:31 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/27 19:56:22 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	get_range(t_stack **a)
{
	int	size;
	int	range;

	size = list_size(a);
	if (size >= 6 && size <= 18)
		range = 3;
	else if (size <= 100)
		range = 15;
	else if (size <= 500)
		range = 45;
	else
		range = 50;
	return (range);
}

void	sort_helper(int *i, int *range, t_stack **b, int size)
{
	if (list_size(b) > 1)
		rb(b);
	if (*i < *range)
		*i += 1;
	if (*range < size - 1)
		*range += 1;
}

void	sort_helper2(int *i, int *range, t_stack **b, int size)
{
	if (list_size(b) > 1 && ((*b)->next->content > (*b)->content))
		sb(b);
	if (*i < *range)
		*i += 1;
	if (*range < size - 1)
		*range += 1;
}

void	push_to_b(t_stack **a, t_stack **b)
{
	int		*arr;
	int		i;
	int		range;
	int		size;

	size = list_size(a);
	arr = bubble_sort(a);
	range = get_range(a);
	i = 0;
	while ((*a))
	{
		if ((*a)->content <= arr[i])
		{
			pb(a, b);
			sort_helper(&i, &range, b, size);
		}
		else if ((*a)->content <= arr[range])
		{
			pb(a, b);
			sort_helper2(&i, &range, b, size);
		}
		else
			ra(a);
	}
	free(arr);
}

// void	push_to_a(t_stack **a, t_stack **b)
// {

// }