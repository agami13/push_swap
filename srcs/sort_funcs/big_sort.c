/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 02:33:31 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/21 01:14:31 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	declare(int *size, t_chunk **nsort, t_stack **a)
{
	(*nsort)->start = 0;
	(*nsort)->end = calculate_chunks(*a);
	(*nsort)->array = bubble_sort(*a);
	*size = stack_len(*a);
}

void	checkertest(t_stack **a, t_stack **b, t_chunk *nsort, int size)
{
	if ((*a)->content <= nsort->array[nsort->start])
	{
		pb(b, a);
		if (stack_len(*b) >= 2)
			rb(b);
		increment_t_chunk(nsort, size);
	}
	else if ((*a)->content <= nsort->array[nsort->end])
	{
		pb(b, a);
		if (stack_len(*b) > 1 && (*b)->content < (*b)->next->content)
			sb(b);
		increment_t_chunk(nsort, size);
	}
	else
		ra(a);
}

void	to_b(t_stack **a, t_stack **b)
{
	t_chunk	*nsort;
	int		size;

	nsort = malloc(sizeof(t_chunk));
	declare(&size, &nsort, a);
	if (!nsort)
		return ;
	while ((*a)->next != NULL)
	{
		checkertest(a, b, nsort, size);
        *a = (*a)->next;
	}
	if ((*a) != NULL)
		pb(b, a);
	free(nsort->array);
	free(nsort);
}

void	to_a(t_stack **a, t_stack **b)
{
	t_stack	*max;
	int		size;

	while (*b)
	{
		max = find_biggest(*b);
		size = stack_len(*b);
		if ((*b)->content == max->content)
			pa(a, b);
		else if (max->index < (size / 2))
			rb(b);
		else
			rrb(b);
		b_index(*b);
	}
}

void    sort_chunks(t_stack **a, t_stack **b)
{
    int size;

    size = stack_len(*a);
    if (size == 2)
        sort_2(a);
    else if (size == 3)
        sort_3(a);
    else if (size == 4)
        sort_4(a, b);
    else if (size == 5)
        sort_5(a, b);
    else
    {
        to_b(a, b);
        b_index(*a);
        to_a(a, b);
    }
}