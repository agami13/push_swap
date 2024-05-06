/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:48:54 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/06 20:49:18 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ra(t_stack **stack_a)
{
	ft_rotate(stack_a);
}

void	rb(t_stack **stack_b)
{
	ft_rotate(stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
}

void	rra(t_stack **stack_a)
{
	ft_reverse_rotate(stack_a);
}

void	rrb(t_stack **stack_b)
{
	ft_reverse_rotate(stack_b);
}
