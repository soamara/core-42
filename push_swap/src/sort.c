/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 20:14:25 by soamara           #+#    #+#             */
/*   Updated: 2025/07/27 16:37:06 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_3(t_node **a)
{
	int	a_val;
	int	b_val;
	int	c_val;

	a_val = (*a)->index;
	b_val = (*a)->next->index;
	c_val = (*a)->next->next->index;
	if (a_val < b_val && b_val < c_val)
		return ;
	else if (a_val > b_val && a_val < c_val)
		sa(a);
	else if (a_val > b_val && b_val > c_val)
	{
		sa(a);
		rra(a);
	}
	else if (a_val > b_val && b_val < c_val && a_val > c_val)
		ra(a);
	else if (a_val < b_val && b_val > c_val && a_val < c_val)
	{
		sa(a);
		ra(a);
	}
	else if ((a_val < b_val && b_val > c_val && a_val > c_val))
		rra(a);
}

void	sort_4(t_node **a, t_node **b)
{
	int		min_index;
	t_node	*tmp;

	min_index = 0;
	tmp = *a;
	while (tmp)
	{
		if (tmp->index == 0)
			break ;
		min_index++;
		tmp = tmp->next;
	}
	if (min_index == 1)
		ra(a);
	else if (min_index == 2)
	{
		ra(a);
		ra(a);
	}
	else if (min_index == 3)
		rra(a);
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_node **a, t_node **b)
{
	int	pos;

	pos = find_pos(*a, 0);
	while (pos != 0)
	{
		if (pos <= 2)
			ra(a);
		else
			rra(a);
		pos = find_pos(*a, 0);
	}
	pb(a, b);
	pos = find_pos(*a, 1);
	while (pos != 0)
	{
		if (pos <= 2)
			ra(a);
		else
			rra(a);
		pos = find_pos(*a, 1);
	}
	pb(a, b);
	sort_3(a);
	pa(a, b);
	pa(a, b);
}

int	find_pos(t_node *stack, int index)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->index == index)
			return (pos);
		pos++;
		stack = stack->next;
	}
	return (-1);
}
