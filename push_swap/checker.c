/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:20:21 by soamara           #+#    #+#             */
/*   Updated: 2025/07/21 17:55:02 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_is_numeric(char  *str)
{
    int i;

    i = 0;
    if(str[i] == '-'|| str[i] == '+')
        i++;
    if(!str[i])
        return(0);
    while(str[i])
    {
        if(str[i] < '0' || str[i] > '9')
            return(0);
        i++;
    }
    return(1);
}
int	has_duplicates(t_node *stack)
{
	t_node *current;
	t_node *runner;

	current = stack;
	while (current)
	{
		runner = current->next;
		while (runner)
		{
			if (runner->value == current->value)
				return (1);
			runner = runner->next;
		}
		current = current->next;
	}
	return (0);
}


int	is_in_int_range(char *str)
{
	long long n;
	int sign = 1;
	int i = 0;

	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			sign = -1;
		i++;
	}
	n = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		n = n * 10 + (str[i] - '0');
		if (sign * n > INT_MAX || sign * n < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

int all_args_are_num(int argc, char **argv)
{
    int i;

    i = 1;
    while(i < argc)
    {
        if(!ft_is_numeric(argv[i]))
            return(0);
        i++;
    }
    return(1);
}