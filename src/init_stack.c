/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:36:51 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/27 15:34:00 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_str_is_numeric(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static void	init_single_arg(t_node **stack_a, char **argv)
{
	char	**args;
	int		i;
	int		num;

	args = ft_split(argv[1], ' ');
	i = 0;
	while (args[i] != NULL)
	{
		if (!ft_str_is_numeric(args[i]))
			ft_error();
		num = ft_atoi(args[i]);
		if (check(*stack_a, num))
			ft_push(stack_a, num);
		else
			ft_error();
		i++;
	}
	ft_split_free(args);
}

static void	init_multiple_args(t_node **stack_a, char **argv, int argc)
{
	int		i;
	int		j;
	char	**args;
	int		num;

	i = 1;
	while (i < argc)
	{
		if (!ft_str_is_numeric(argv[i]))
			ft_error();
		args = ft_split(argv[i], ' ');
		j = 0;
		while (args[j])
		{
			num = ft_atoi(args[j]);
			if (check(*stack_a, num))
				ft_push(stack_a, num);
			else
				ft_error();
			j++;
		}
		ft_split_free(args);
		i++;
	}
}

void	init_stack(t_node **stack_a, char **argv, int argc)
{
	if (argc < 2)
		ft_error();
	if (argc == 2)
		init_single_arg(stack_a, argv);
	else
		init_multiple_args(stack_a, argv, argc);
}
