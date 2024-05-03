/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_parse3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:12:06 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/03 22:08:05 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	error(void)
{
	write(2, "Error\n", ft_strlen("Error\n"));
	exit(1);
}

int	parsing(t_stack **a, char **str)
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
	return (0);
}

int	empty_space_check(char **str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (str[i])
	{
		j = 0;
		k = 0;
		while (str[i][j])
		{
			if (str[i][j] == ' ')
				k++;
			j++;
		}
		if (k == j)
			return (1);
		i++;
	}
	return (0);
}
