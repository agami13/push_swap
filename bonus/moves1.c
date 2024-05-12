/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:47:09 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/12 03:29:36 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a) == NULL || (*stack_b) == NULL)
		return ;
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
}
