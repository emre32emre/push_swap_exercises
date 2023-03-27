/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:55:01 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/27 11:45:06 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_node **root, int val)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	new_node->val = val;
	new_node->next = *root;
	*root = new_node;
}
