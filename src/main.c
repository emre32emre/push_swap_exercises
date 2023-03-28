/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:07:19 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/28 12:07:38 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;

	init_stack(&stack_a, argv, argc);
	if (!ft_checksorted(stack_a))
		ft_sort(&stack_a);
}
