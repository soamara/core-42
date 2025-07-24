/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:12:55 by soamara           #+#    #+#             */
/*   Updated: 2025/07/24 19:13:55 by soamara          ###   ########.fr       */
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


t_node  *new_node(int value);
t_node	*init_stack_from_args(int argc, char **argv);

void    index_stack(t_node *stack);
void    add_back(t_node **stack, t_node *new);
void	free_stack(t_node *stack);

int ft_atoi(const char *str);
int	has_unindexed(t_node *stack);
int ft_is_numeric(char  *str);
int	is_in_int_range(char *str);
int	has_duplicates(t_node *stack);
int all_args_are_num(int argc, char **argv);

#endif