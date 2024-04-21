/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:28:51 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/21 01:08:27 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
	
void	increment_t_chunk(t_chunk *nsort, int size)
{
	if (nsort->start < nsort->end)
		nsort->start++;
	if (nsort->end < size - 1)
		nsort->end++;
}

t_stack	*find_biggest(t_stack *a)
{
	t_stack	*nextn;
	t_stack	*max;

	max = a;
	while (a->next != NULL)
	{
		nextn = a->next;
		if (nextn != NULL && nextn->content > max->content)
		{
			max = nextn;
		}
		a = nextn;
	}
	return (max);
}

void	b_index(t_stack *b)
{
	int	i;

	i = 0;
	while (b != NULL)
	{
		b->index = i++;
		b = b->next;
	}
}

int	*covert_to_arr(t_stack **a, int size)
{
	int *arr;
	int i;
	t_stack *temp;

	temp = *a;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = temp->content;
		i++;
		temp = temp->next;
	}
	return (arr);
}

int	stack_len(t_stack *a)
{
	int	c;

	c = 0;
	while (a != NULL)
	{
		c++;
		a = a->next;
	}
	return (c);
}

void	intialvar(int **tosort, int *step, int *i, t_stack *a)
{
	*tosort = covert_to_arr(&a, stack_len(a));
	*step = 0;
	*i = 0;
}