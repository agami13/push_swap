/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:52:30 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/01 00:54:10 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{
	t_stack *stack = NULL;
	
	if (checker(argv + 1, argc) == 1)
		ft_printf("ERROR\n");
	else
	{
		stack = stack_fill(argv + 1, argc);
		while (stack)
		{
			ft_printf("index = %d\n", stack -> index);
			stack = stack -> next;
		}
		ft_printf("\n\n\n\n");		
		stack = stack_fill(argv + 1, argc);	
		while (stack)
		{
			ft_printf("content = %d\n", stack -> content);
			stack = stack -> next;
		}	
	}
	return (0);
}