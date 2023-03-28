/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:03:58 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/28 12:09:55 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../lib/libft/libft.h"

typedef struct s_node
{
	int				val;
	int				index;
	struct s_node	*next;
}t_node;

# define DEBUG 1

void	init_stack(t_node **stack_a, char **argv, int argc);

/***      SORT    ***/
int		ft_checksorted(t_node *stack_a);
void	ft_sort(t_node **stack_a);
void	ft_sort_three(t_node **stack_a);
int		ft_case_rarb(t_node *a, t_node *b, int c);
int		ft_case_rrarrb(t_node *a, t_node *b, int c);
int		ft_case_rrarb(t_node *a, t_node *b, int c);
int		ft_case_rarrb(t_node *a, t_node *b, int c);
int		ft_case_rarb_a(t_node *a, t_node *b, int c);
int		ft_case_rrarrb_a(t_node *a, t_node *b, int c);
int		ft_case_rarrb_a(t_node *a, t_node *b, int c);
int		ft_case_rrarb_a(t_node *a, t_node *b, int c);
int		ft_rotate_type_ab(t_node *a, t_node *b);
int		ft_rotate_type_ba(t_node *a, t_node *b);
int		ft_apply_rarb(t_node **a, t_node **b, int c, char s);
int		ft_apply_rrarrb(t_node **a, t_node **b, int c, char s);
int		ft_apply_rrarb(t_node **a, t_node **b, int c, char s);
int		ft_apply_rarrb(t_node **a, t_node **b, int c, char s);

/***      STACK    ***/
int		ft_pop(t_node **root);
void	ft_push(t_node **root, int val);
void	ft_print_stack(t_node *root);
void	ft_print_two_stack(t_node *st_a, t_node *st_b);
int		peek(t_node *root);
int		check(t_node *stack, int num);
int		ft_stack_size(t_node *stack);
t_node	*ft_get_first_node(t_node *stack);

/***      UTILS    ***/
void	ft_error(void);
int		ft_max(t_node *a);
int		ft_min(t_node *a);
int		ft_find_index(t_node *a, int nbr);
int		ft_find_place_a(t_node *stack_a, int nbr_push);
int		ft_find_place_b(t_node *stack_b, int nbr_push);

/***      RULES    ***/
void	rule_sa(t_node **stack_a);
void	rule_sb(t_node **stack_b);
void	rule_ss(t_node **stack_a, t_node **stack_b);

void	rule_pb(t_node **stack_a, t_node **stack_b);
void	rule_pa(t_node **stack_a, t_node **stack_b);

void	rule_ra(t_node **stack_a);
void	rule_rb(t_node **stack_b);
void	rule_rr(t_node **stack_a, t_node **stack_b);

void	rule_rra(t_node **stack_a);
void	rule_rrb(t_node **stack_b);
void	rule_rrr(t_node **stack_a, t_node **stack_b);

# define C_RED   "\x1B[31m"
# define C_GRN   "\x1B[32m"
# define C_YEL   "\x1B[33m"
# define C_BLU   "\x1B[34m"
# define C_MAG   "\x1B[35m"
# define C_CYN   "\x1B[36m"
# define C_WHT   "\x1B[37m"
# define C_RESET "\x1B[0m"

#endif