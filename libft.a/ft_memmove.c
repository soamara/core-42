/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:27:59 by soamara           #+#    #+#             */
/*   Updated: 2024/10/16 19:15:07 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*sptr;
	unsigned char	*dptr;

	if (!src || !dest)
		return (NULL);
	sptr = (unsigned char *)src;
	dptr = (unsigned char *)dest;
	if ((src < dest) && ((src + n) > dest))
	{
		while (n--)
		{
			dptr[n] = sptr[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dptr[i] = sptr[i];
			i++;
		}
	}
	return (dest);
}
