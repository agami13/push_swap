/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 05:50:18 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/02 03:05:06 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	dup_check(char **av)
{
	int	i;
	int	j;
	int	*array;

	i = 0;
	array =	(int *)malloc(sizeof(int) * (ft_numlen(av)));
			ft_printf("j = klmlml;m,\n");
	if (!array)
		return (1);
	// array[ft_numlen(av)] = 0;
	while (av[i])
	{
		array[i] = ft_atol(av[i]);
		i++;
	}
	i = 0;
	while (array[i])
	{
		j = i + 1;
		while (array[j])
		{
			if (array[i] == array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	checker2(char *av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if ((av[i] == '-' && (av[i + 1]) == ' ')
			|| (av[i] == '+' && (av[i + 1]) == ' '))
			return (1);
		else if ((av[i] == '-' && !(av[i + 1]))
			|| (av[i] == '+' && !(av[i + 1])))
			return (1);
		else if ((av[i] <= 31) || (av[i] >= 33 && av[i] <= 44)
			|| (av[i] >= 46 && av[i] <= 47)
			|| (av[i] >= 58 && av[i] <= 127))
			return (1);
		i++;
	}
	return (0);
}

int	checker(char **av)
{
	int	i;
	int	j;

	i = 0;
	if (dup_check(av) == 1)
		return (1);
	while (av[i])
	{
		j = 0;
		if ((av[i][0] == '\0') || (checker2(av[i]) == 1))
			return (1);
		while (av[i][j])
		{
			if (ft_isalpha(av[i][j]) || ((av[i][j] == '-' || av[i][j] == '+')
					&& (av[i][j + 1] == '-' || av[i][j + 1] == '+')))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
