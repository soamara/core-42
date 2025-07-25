/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:27:08 by soamara           #+#    #+#             */
/*   Updated: 2025/07/25 21:00:19 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int swap(t_node **stack)
{
    t_node *first;
    t_node *second;

    if(!*stack || !(*stack) ->next)
        return (0);
    first = *stack;
    second = (*stack) ->next;
    first->next = second->next;
    second->next = first;
    *stack = second;
    return(1);
}

void   sa(t_node **A)
{
    swap(A);
    write(1, "sa\n", 3);
}
void    sb(t_node **B)
{
    swap(B);
    write(1, "sb\n", 3);
}

int    ss(t_node **A, t_node **B)
{
    if (swap(A) && swap(B))
        write(1, "ss\n", 3);
        return(0);
}