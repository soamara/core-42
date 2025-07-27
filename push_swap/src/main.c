/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:11:29 by soamara           #+#    #+#             */
/*   Updated: 2025/07/27 17:36:49 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_stack(t_node **a, t_node **b, int size)
{
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
	else if (size == 5)
		sort_5(a, b);
	else
		radix_sort(a, b);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	push_swap(argc, argv, &a, &b);
	return (0);
}

int	push_swap(int argc, char **argv, t_node **a, t_node **b)
{
	int	size;

	if (!all_args_are_num(argc, argv))
		return (write(2, "Error\n", 6), 1);
	*a = init_stack_from_args(argc, argv);
	if (has_duplicates(*a))
		return (free_stack(*a), write(2, "Error\n", 6), 1);
	index_stack(*a);
	if (is_sorted(*a))
		return (free_stack(*a), 0);
	size = stack_size(*a);
	sort_stack(a, b, size);
	free_stack(*a);
	free_stack(*b);
	return (0);
}
