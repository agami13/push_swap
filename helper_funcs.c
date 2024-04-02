/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_funcs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 00:49:07 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/04/02 03:11:12 by ybouaoud         ###   ########.fr       */
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

int ft_numlen(char **str)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
		ft_printf("k = %s\n", str[0]);
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] == ' ')
				k++;
			j++;
		}
		i++;
	}
	return (i);
}

// void	ft_listdelone(t_stack *lst, void (*del)(void *))
// {
// 	if (!lst || !del)
// 		return ;
// 	del(lst -> content);
// 	free(lst);
// }

// void	ft_listclear(t_stack **lst, void (*del)(void *))
// {
// 	t_stack	*temp;
// 	t_stack	*n;

// 	n = *lst;
// 	if (!del || !lst)
// 		return ;
// 	while (n)
// 	{
// 		temp = n -> next;
// 		ft_lstdelone(n, del);
// 		n = temp;
// 	}
// 	*lst = NULL;
// }

long	ft_atol(const char *str)
{
	long long	index;
	long long	results;
	int		sign;

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
	int	i;
	int	j;
	char **array;
	char *str = NULL;

	i = 0;
	j = 0;
	while(av[i])
	{
		array = ft_split(av[i], ' ');
		while(array[j])
		{
			ft_strjoin(str, array[j]);
			ft_strjoin(str, " ");
			j++;
		}
		i++;
	}
	ft_strjoin(str, "\0");
	free_strs(array);
	ft_printf("str>>>>>>> = %s\n", str);
	return (ft_split(str, ' '));
}