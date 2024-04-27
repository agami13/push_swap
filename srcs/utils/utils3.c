/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:28:51 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/27 20:00:04 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
