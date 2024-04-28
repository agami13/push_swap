/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 04:32:00 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/28 05:11:22 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	parsing(char **argv, t_stack **a, char **str)
{
	(*a) = stack_fill(str);
	if (!a)
	{
		free_strs(str);
		error();
	}
	if (nill_check(argv + 1) == 1 || checker(str) == 1)
	{
		free_strs(str);
		error();
	}
	else if (is_sorted(str) == 1 || (empty_space_check(argv + 1)) == 1)
	{
		free_strs(str);
		error();
	}
}
