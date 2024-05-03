/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:25:15 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/03 16:25:57 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	stack_sorted(t_stack **stack)
{
	t_stack	*temp;

	temp = *stack;
	while (temp -> next)
	{
		if (temp -> content > temp -> next -> content)
			return (0);
		temp = temp -> next;
	}
	return (1);
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
