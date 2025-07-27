/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:15:48 by soamara           #+#    #+#             */
/*   Updated: 2025/07/27 18:14:36 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	index_stack(t_node *stack)
{
	int		i;
	int		lower;
	t_node	*tmp;
	t_node	*min_node;

	i = 0;
	while (has_unindexed(stack))
	{
		min_node = NULL;
		tmp = stack;
		lower = 2147483647;
		while (tmp)
		{
			if (lower >= tmp->value && tmp->index == -1)
			{
				lower = tmp->value;
				min_node = tmp;
			}
			tmp = tmp->next;
		}
		if (min_node)
			min_node->index = i++;
	}
}

void	radix_sort_pass(t_node **a, t_node **b, int bit, int size)
{
	int		j;
	t_node	*tmp;

	j = 0;
	while (j < size)
	{
		tmp = *a;
		if (((tmp->index >> bit) & 1) == 0)
			pb(a, b);
		else
			ra(a);
		j++;
	}
}

void	radix_sort(t_node **a, t_node **b)
{
	int	max_bits;
	int	size;
	int	i;

	i = 0;
	size = stack_size(*a);
	max_bits = 0;
	while ((size - 1) >> max_bits)
		max_bits++;
	while (i < max_bits)
	{
		radix_sort_pass(a, b, i, size);
		while (*b)
			pa(a, b);
		i++;
	}
}

int	stack_size(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
