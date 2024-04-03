/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:52:30 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/03 01:11:03 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int main(int argc, char **argv)
// {
// 	t_stack *stack = NULL;
// 	char **str = NULL;
	
// 	str = spliting_nums(argv + 1);
// 	if (argc <= 2)
// 		return (0);
// 	else if((nill_check(argv + 1) == 1) || (checker(str) == 1))
// 	{
// 		ft_printf("ERROR\n");
// 		exit(1);
// 	}
// 	else
// 	{
// 		stack = stack_fill(str);
// 		while (stack)
// 		{
// 			ft_printf("index = %d\n", stack -> index);
// 			stack = stack -> next;
// 		}
// 		ft_printf("\n\n\n\n");		
// 		stack = stack_fill(str);	
// 		while (stack)
// 		{
// 			ft_printf("content = %d\n", stack -> content);
// 			stack = stack -> next;
// 		}
// 		ft_listclear(&stack);
// 	}
// 	free_strs(str);
// 	return (0);
// }

int main(int argc, char **argv)
{
    t_stack *stack = NULL;
    t_stack *current = NULL;
    char **str = NULL;
    
    str = spliting_nums(argv + 1);
    // int i = 0;
    if (argc <= 2)
    {
        free_strs(str);
        return (0);
    }
    else if((nill_check(argv + 1) == 1) || (checker(str) == 1))
    {
        ft_printf("ERROR\n");
        free_strs(str);
        exit(1);
    }
    else
    {
        stack = stack_fill(str);
		if (!stack)
		{
    	ft_printf("ERROR\n");
    	free_strs(str);
    	exit(1);
		}
        current = stack;
        while (current)
        {
            ft_printf("index = %d\n", current -> index);
            current = current -> next;
        }
        ft_printf("\n\n\n\n");		
        ft_listclear(&stack);
        stack = stack_fill(str);
        current = stack;
        while (current)
        {
            ft_printf("content = %d\n", current -> content);
            current = current -> next;
        }
        ft_listclear(&stack);
    }
    free_strs(str);
    return (0);
}