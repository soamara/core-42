/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:59:09 by soamara           #+#    #+#             */
/*   Updated: 2024/10/23 12:18:32 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_itoa_size(int n)
{
	size_t	size;

	if (n > 0)
		size = 0;
	else
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	num;
	size_t	size;

	num = (long) n;
	size = ft_itoa_size(n);
	if (n < 0)
		num *= -1;
	result = (char *) malloc(size + 1);
	if (!result)
		return (NULL);
	*(result + size--) = '\0';
	while (num > 0)
	{
		*(result + size--) = (num % 10) + '0';
		num /= 10;
	}
	if (size == 0 && result[1] == '\0')
		*(result + size) = '0';
	else if (size == 0 && result[1])
		*(result + size) = '-';
	return (result);
}
