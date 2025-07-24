/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiane <sofiane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:20:21 by soamara           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/07/23 17:54:48 by sofiane          ###   ########.fr       */
=======
/*   Updated: 2025/07/24 17:56:51 by soamara          ###   ########.fr       */
>>>>>>> b554dae (***)
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_numeric(char *str)
{
    int i;

    i = 0;
    if(str[i] == '-' || str[i] == '+')
        i++;
    if(!str[i]) // si apres signe y a r
        return(0);
    while(str[i])
    {
        if(str[i] < '0' || str[i] > '9')
            return(0);
        i++;
    }
    return(1);
}
long long	ft_atol(const char *str)
{
	long long	res;
	int			sign;
	int			i;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	is_int_range(char *str)
{
	long long	nb;

	nb = ft_atol(str);
	if (nb < -2147483648 || nb > 2147483647)
		return (0);
	return (1);
}

int has_duplicates(t_node *stack)
{
    t_node *current;
    t_node *checker;

    current = stack;
    while(current)
    {
        checker = current->next;
        while(checker)
        {
            if(current->value == checker ->value)
                return(1);
            checker = checker ->next;
        }
        current = current ->next;
    }
    return(0);
}

void	free_stack(t_node *stack)
{
    t_node  *tmp;
    
    while (stack)
    {
        tmp = stack ->next;
        free(stack);
        stack = tmp;
    }
}
