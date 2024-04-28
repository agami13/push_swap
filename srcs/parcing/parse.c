/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 04:32:00 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/28 05:44:47 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	error(void)
{
	ft_printf("Error\n");
	exit(1);
}

void	parsing(t_stack **a, char **str)
{
	(*a) = stack_fill(str);
	if (!a)
	{
		free_strs(str);
		error();
	}
	if (is_sorted(str) == 1 || checker(str) == 1)
	{
		ft_listclear(a);
		free_strs(str);
		error();
	}
}
