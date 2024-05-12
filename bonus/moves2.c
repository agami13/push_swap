/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:47:59 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/12 03:29:34 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	sa(t_stack **stack_a)
{
	if ((*stack_a) == NULL)
		return ;
	ft_swap(stack_a);
}

void	sb(t_stack **stack_b)
{
	if ((*stack_b) == NULL)
		return ;
	ft_swap(stack_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a) == NULL || (*stack_b) == NULL)
		return ;
	ft_swap(stack_a);
	ft_swap(stack_b);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_b) == NULL)
		return ;
	ft_push(stack_b, stack_a);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a) == NULL)
		return ;
	ft_push(stack_a, stack_b);
}
