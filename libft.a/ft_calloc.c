/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:06:25 by soamara           #+#    #+#             */
/*   Updated: 2024/10/23 18:22:25 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	else if (((nmemb * size) / size) != nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
