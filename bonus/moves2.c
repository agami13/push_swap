/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:47:59 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/06 20:55:56 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	sa(t_stack **stack_a)
{
	ft_swap(stack_a);
}

void	sb(t_stack **stack_b)
{
	ft_swap(stack_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_b, stack_a);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_a, stack_b);
}
