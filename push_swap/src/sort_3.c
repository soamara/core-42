/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 20:14:25 by soamara           #+#    #+#             */
/*   Updated: 2025/07/25 21:00:14 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void sort_3(t_node **a)
{

    int a_val = (*a)->value;
    int b_val = (*a)->next->value;
    int c_val = (*a)->next->next->value;

    if (a_val < b_val && b_val < c_val)
        return ;
    else if (a_val > b_val && a_val < c_val)
        sa(a);
    else if (a_val > b_val && b_val > c_val)
    {
        sa(a);
        rra(a);
    }
    else if(a_val > b_val && b_val < c_val && a_val > c_val)
        ra(a);
    else if (a_val < b_val && b_val > c_val && a_val < c_val)
    {
        sa(a);
        ra(a);
    }
    else if ((a_val < b_val && b_val > c_val && a_val > c_val))
        rra(a);
        
}