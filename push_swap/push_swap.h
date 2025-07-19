/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:12:55 by soamara           #+#    #+#             */
/*   Updated: 2025/06/24 12:12:55 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_node
{
    int             value;
    int             index;
    struct s_node   *next;
}   t_node;


t_node  *new_node(int value);
t_node	*init_stack_from_args(int argc, char **argv);
void    add_back(t_node **stack, t_node *new);
int ft_atoi(const char *str);


#endif