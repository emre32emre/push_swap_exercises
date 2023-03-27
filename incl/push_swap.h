/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:03:58 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/27 16:22:24 by mkocabas         ###   ########.fr       */
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

#define log write(1,"aq\n",3);
#define DEBUG 1

#define SA &stack_a
#define SB &stack_b
#define SS &stack_a, &stack_b
#define XSS stack_a, stack_b


/***      SORT    ***/

int		ft_checksorted(t_node *stack_a);
void	ft_sort(t_node **stack_a);
void	ft_sort_three(t_node **stack_a);
//int		ft_rotate_type_ab(t_stack *a, t_stack *b);

/***      STACK    ***/
int		ft_pop(t_node **root);
void	ft_push(t_node **root, int val);
void	ft_print_stack(t_node *root);
void	ft_print_two_stack(t_node *st_a, t_node *st_b);
int		peek(t_node *root);
int		check(t_node *stack, int num);
int		ft_stack_size(t_node *stack);

void	init_stack(t_node **stack_a, char **argv, int argc);
/***      UTILS    ***/
void	ft_error(void);
int	ft_max(t_node *a);
int	ft_min(t_node *a);
int	ft_find_index(t_node *a, int nbr);
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