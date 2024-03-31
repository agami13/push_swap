/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 05:50:18 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/03/31 07:00:52 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int dup_check(char **av, int ac)
{
	int i;
	int j;
	int array[ac];

	i = 0;
	while (av[i])
	{
		array[i] = ft_atoi(av[i]);
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
	int i;

	i = 0;
	while (av[i])
	{
		if ((av[i] == '-' && !(av[i + 1])) || (av[i] == '+' && !(av[i + 1])))
			return (1);
		i++;
	}
	return (0);
}

int	checker(char **av, int ac)
{
	int i;
	int j;
	
	i = 0;
	if (dup_check(av, ac) == 1)
		return (1);
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_isalpha(av[i][j]))
				return(1);
			else if ((av[i][j] == '-' || av[i][j] == '+') && (av[i][j + 1] == '-' || av[i][j + 1] == '+'))
				return (1);
			j++;
		}
		if (checker2(av[i]) == 1)
			return (1);
		i++;	
	}
	return (0);
}