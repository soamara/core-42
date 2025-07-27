/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:12:55 by soamara           #+#    #+#             */
/*   Updated: 2025/07/27 17:10:40 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

#define INT_MIN -2147483648
#define INT_MAX 2147483647

typedef struct s_node
{
    int             value;
    int             index;
    struct s_node   *next;
}   t_node;


//check
int	is_numeric(char *str);
long long	ft_atol(const char *str);
int	is_int_range(char *str);
int	has_duplicates(t_node *stack);
void	free_stack(t_node *stack);

//main
void	sort_stack(t_node **a, t_node **b, int size);
int	push_swap(int argc, char **argv, t_node **a, t_node **b);

//op_push
int	op_push(t_node **from, t_node **to);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);

//op_revrotate
int	revrovate(t_node **head);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);

//op_rotate
int	rotate(t_node **head);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

//op_swap
int	swap(t_node **stack);
void	sa(t_node **A);
void	sb(t_node **B);
int	ss(t_node **A, t_node **B);

//radix
void	radix_sort_pass(t_node **a, t_node **b, int bit, int size);
void	index_stack(t_node *stack);
void radix_sort(t_node **a, t_node **b);
int	stack_size(t_node *stack);

//sort
void sort_3(t_node **a);
void sort_4(t_node **a, t_node  **b);
void sort_5(t_node **a, t_node  **b);
int find_pos(t_node *stack, int index);

//utils
int	ft_atoi(const char *str);
int	is_sorted(t_node *stack);
int	all_args_are_num(int argc, char **argv);

//utilsbis
t_node *new_node(int value);
void add_back(t_node **stack, t_node *new);
t_node	*init_stack_from_args(int argc, char **argv);
int	has_unindexed(t_node *stack);

#endif