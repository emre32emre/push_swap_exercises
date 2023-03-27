/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 15:07:22 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/27 15:34:28 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(t_node *stack, int num)
{
	t_node	*current;

	current = stack;
	while (current != NULL)
	{
		if (current->val == num)
			ft_error();
		
		current = current->next;
	}
	return (1);
}
