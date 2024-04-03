/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 08:37:36 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/03 09:48:28 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	stack_sorted(t_stack **stack, int size)
{
	t_stack	*temp;
	int 	j;
	
	temp = *stack;
	j = 0;
	while (temp -> next)
	{
		if (temp -> content < temp -> next -> content)
			j++;
		temp = temp -> next;
	}
	if (j == size)
		return (1);
	return (0);
}

int	is_sorted(char **str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = ft_numlen(str);
	while (i < len - 1)
	{
		if (ft_atol(str[i]) < ft_atol(str[i + 1]))
			j++;
		i++;
	}
	if (j == len - 1)
		return (1);
	return (0);
}
