/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:28:51 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/03 01:38:26 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*find_biggest(t_stack *a)
{
	t_stack	*next;
	t_stack	*max;

	max = a;
	while (a->next != NULL)
	{
		next = a->next;
		if (next != NULL && next->content > max->content)
		{
			max = next;
		}
		a = next;
	}
	return (max);
}

int	*covert_to_arr(t_stack **a, int size)
{
	int		*arr;
	int		i;
	t_stack	*temp;

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
