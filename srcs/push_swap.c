/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:52:30 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/27 18:12:20 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

// int main(int argc, char **argv)
// {
//     t_stack *stack = NULL;
//     t_stack *current = NULL;
//     char **str = NULL;
    
//     str = spliting_nums(argv + 1);
//     // int i = 0;
//     if (argc <= 2)
//     {
//         free_strs(str);
//         return (0);
//     }
//     else if((nill_check(argv + 1) == 1) || (checker(str) == 1))
//     {
//         ft_printf("ERROR\n");
//         free_strs(str);
//         exit(1);
//     }
//     else
//     {
//         stack = stack_fill(str);
// 		if (!stack)
// 		{
//     	ft_printf("ERROR\n");
//     	free_strs(str);
//     	exit(1);
// 		}
//         current = stack;
//         while (current)
//         {
//             ft_printf("index = %d\n", current -> index);
//             current = current -> next;
//         }
//         ft_printf("\n\n\n\n");		
//         ft_listclear(&stack);
//         stack = stack_fill(str);
//         current = stack;
//         while (current)
//         {
//             ft_printf("content = %d\n", current -> content);
//             current = current -> next;
//         }
//         ft_listclear(&stack);
//     }
//     free_strs(str);
//     return (0);
// }

int main(int argc, char *argv[])
{
    t_stack *a = NULL;
    t_stack *b = NULL;
    // t_stack *tmp = NULL;
    char **str = spliting_nums(argv + 1);

    if (argc <= 2)
    {
        a = stack_fill(str);
        if (!a)
        {
            ft_printf("Error\n");
            free_strs(str);
            exit(1);
        }
        // tmp = a;
        // t_stack *tmp2 = b;
        // ft_printf("stack a\n");
        // while (tmp)
        // {
        //     ft_printf("index: %d, content: %d\n", tmp->index, tmp->content);
        //     tmp = tmp->next;
        // }
        // ft_printf("stack b\n");
        // while (tmp2)
        // {
        //     ft_printf("index: %d, content: %d\n", tmp2->index, tmp2->content);
        //     tmp2 = tmp2->next;
        // }
        // ft_printf("\n\n\n\n\n");
        // if (stack_sorted(&a) == 1)
        //     ft_printf("stack a is sorted\n\n\n");
        // else
        //     ft_printf("stack a is not sorted\n\n\n");
        sort_5(&a, &b);
        // if (stack_sorted(&a) == 1)
        //     ft_printf("stack a is sorted\n\n\n");
        // else
        //     ft_printf("stack a is not sorted\n\n\n");
        // ft_printf("\n\n\n\n\n");
        // tmp = a;
        // tmp2 = b;
        // ft_printf("stack a\n");
        // while (tmp)
        // {
        //     ft_printf("index: %d, content: %d\n", tmp->index, tmp->content);
        //     tmp = tmp->next;
        // }
        // ft_printf("stack b\n");
        // while (tmp2)
        // {
        //     ft_printf("index: %d, content: %d\n", tmp2->index, tmp2->content);
        //     tmp2 = tmp2->next;
        // }
        ft_listclear(&a);
        ft_listclear(&b);
        return (0);
    }
    else if (nill_check(argv + 1) == 1 || checker(str) == 1 || is_sorted(str) == 1 || (empty_space_check(argv + 1)) == 1)
    {
        ft_printf("Error\n");
        free_strs(str);
        exit(1);
    }
    else
    {
        a = stack_fill(str);
        // b = stack_fill(str);
        if (!a)
        {
            ft_printf("Error\n");
            free_strs(str);
            exit(1);
        }
        // current = a;
        // current2 = b;
        // ft_push(&a, &b);
        // while (current && current2)
        // {
        //     ft_printf("stack a [%d] = %d\t\t\t\t", current -> index, current -> content);
        //     ft_printf("stack b [%d] = %d\n", current2 -> index, current2 -> content);
        //     current = current -> next;
        //     current2 = current2 -> next;
        // }
        // b = NULL;
        // current = a;
        // while (current)
        // {
        //     ft_printf("stack a [%d] = %d\n",current -> index, current -> content);
        //     current = current -> next;
        // }
        // ft_printf("\n\n\n\n\n");
        // b = stack_fill(pb(&a, &b));
        // ft_printf("\n\n\n\n");
        // current = a;
        // while (current)
        // {
        //     ft_printf("stack a [%d] = %d\n",current -> index, current -> content);
        //     current = current -> next;
        // }
        // ft_printf("\n\n\n\n\n");
        // t_stack *current2 = b;
        // while (current2)
        // {
        //     ft_printf("stack b [%d] = %d\n",current2 -> index, current2 -> content);
        //     current2 = current2 -> next;
        // }
        // tmp = a;
        // t_stack *tmp2 = b;
        // ft_printf("stack a\n");
        // while (tmp)
        // {
        //     ft_printf("index: %d, content: %d\n", tmp->index, tmp->content);
        //     tmp = tmp->next;
        // }
        // ft_printf("stack b\n");
        // while (tmp2)
        // {
        //     ft_printf("index: %d, content: %d\n", tmp2->index, tmp2->content);
        //     tmp2 = tmp2->next;
        // }
        // ft_printf("\n\n\n\n\n");
        // if (stack_sorted(&a) == 1)
        //     ft_printf("stack a is sorted\n\n\n");
        // else
        //     ft_printf("stack a is not sorted\n\n\n");
        push_to_b(&a, &b);
        // if (stack_sorted(&a) == 1)
        //     ft_printf("stack a is sorted\n\n\n");
        // else
        //     ft_printf("stack a is not sorted\n\n\n");
        // ft_printf("\n\n\n\n\n");
        // tmp = a;
        // tmp2 = b;
        // ft_printf("stack a\n");
        // while (tmp)
        // {
        //     ft_printf("index: %d, content: %d\n", tmp->index, tmp->content);
        //     tmp = tmp->next;
        // }
        // ft_printf("stack b\n");
        // while (tmp2)
        // {
        //     ft_printf("index: %d, content: %d\n", tmp2->index, tmp2->content);
        //     tmp2 = tmp2->next;
        // }
        ft_listclear(&a);
        ft_listclear(&b);
    }
    free_strs(str);
    return (0);
}