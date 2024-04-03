/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 00:49:07 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/03 01:10:42 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**free_strs(char **strs)
{
	unsigned int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

int	ft_numlen(char **str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

long	ft_atol(const char *str)
{
	long long	index;
	long long	results;
	int			sign;

	index = 0;
	results = 0;
	sign = 1;
	while (str[index] == ' ' || (str[index] >= '\t' && str[index] <= '\r'))
		index++;
	if (str[index] == '-' && (str[index + 1] >= '0' && str[index + 1] <= '9'))
	{
		sign *= -1;
		index++;
	}
	if (str[index] == '+' && (str[index + 1] >= '0' && str[index + 1] <= '9'))
		index++;
	while (str[index])
	{
		if (str[index] >= '0' && str[index] <= '9')
			results = (results * 10) + (str[index] - '0');
		else
			break ;
		index++;
	}
	return (results * sign);
}

char	**spliting_nums(char **av)
{
	int			i;
	int			j;
	char		**array;
	char		*str;
	char		**result;
	char		*temp;

	i = 0;
	str = ft_strdup("");
	while (av[i])
	{
		array = ft_split(av[i], ' ');
		j = 0;
		while (array[j])
		{
			temp = ft_strjoin(str, array[j]);
			free(str);
			str = temp;
			temp = ft_strjoin(str, " ");
			free(str);
			str = temp;
			j++;
		}
		free_strs(array);
		i++;
	}
	result = ft_split(str, ' ');
	free(str);
	return (result);
}
