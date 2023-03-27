/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:50:18 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/22 10:52:32 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pop(t_node **root)
{
	int		val;
	t_node	*temp;

	if (*root == NULL)
		return (-1);
	val = (*root)->val;
	temp = *root;
	*root = (*root)-> next;
	free(temp);
	return (val);
}
