/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:52:30 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/02 02:51:22 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *stack = NULL;
	char **str = NULL;
	
	str = spliting_nums(argv + 1);
	if (checker(str) == 1)
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
// for int (i = 0; array[i]; i++)
// {
// 	for(int j = i + 1; array[j]; j++)
// 	{
// 		if (array[i] == array[j])
// 			return (1);
// 	}
// }