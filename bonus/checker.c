/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouaoud <ybouaoud@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:07:45 by ybouaoud          #+#    #+#             */
/*   Updated: 2024/05/06 20:42:27 by ybouaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

int	do_instructions(t_stack **a, t_stack **b, char *line)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		sa(a);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		sb(b);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		ss(a, b);
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		pa(a, b);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		pb(a, b);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		ra(a);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rb(b);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		rr(a, b);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		rra(a);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		rrb(b);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		rrr(a, b);
	else
		return (0);
	return (1);
}

void	input(t_stack **a, t_stack **b)
{
	char	*input;

	input = get_next_line(0);
	while (input)
	{
		if (!do_instructions(a, b, input))
		{
			free(input);
			ft_putstr_fd("Error\n", 1);
			exit(-1);
		}
		free(input);
		input = get_next_line(0);
	}
	free(input);
}

void	main_helper(t_stack **a, t_stack **b)
{
	if (stack_sorted(a) == 1)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	ft_listclear(a);
	ft_listclear(b);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char	**str;

	if (argc == 1)
		error();
	if ((empty_space_check(argv + 1)) == 1 || nill_check(argv + 1) == 1)
		error();
	str = spliting_nums(argv + 1);
	if (!str)
		error();
	b = NULL;
	parsing(&a, str);
	input(&a, &b);
	main_helper(&a, &b);
	free_strs(str);
	return (0);
}
