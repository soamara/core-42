/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:11:29 by soamara           #+#    #+#             */
/*   Updated: 2025/07/27 13:58:09 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>
int	main(int argc, char **argv)
{
	t_node	*a = NULL;
	t_node	*b = NULL;
	int		size;

	if (argc < 2)
		return (0);

	if (!all_args_are_num(argc, argv))
		return (write(2, "Error\n", 6), 1);

	a = init_stack_from_args(argc, argv);

	if (has_duplicates(a))
		return (free_stack(a), write(2, "Error\n", 6), 1);

	index_stack(a);

	if (is_sorted(a))
		return (free_stack(a), 0);

	size = 0;
	t_node *tmp = a;
	while (tmp)
	{
		size++;
		tmp = tmp->next;
	}

	if (size == 2)
		sa(&a);
	else if (size == 3)
		sort_3(&a);
	else if (size == 4)
		sort_4(&a, &b);
	else if (size == 5)
		sort_5(&a, &b);
    else
        radix_sort(&a, &b);
	free_stack(a);
	free_stack(b);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

void print_stack(t_node *stack)
{
    while (stack)
    {
        printf("%d ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}

int is_sorted(t_node *stack)
{
    while (stack && stack->next)
    {
        if (stack->value > stack->next->value)
            return 0;
        stack = stack->next;
    }
    return 1;
}


int all_args_are_num(int argc, char **argv)
{
    int i = 1;
    while (i < argc)
    {
        if (!is_numeric(argv[i]))
            return 0;
        i++;
    }
    return 1;
}
