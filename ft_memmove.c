/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:51:58 by wimam             #+#    #+#             */
/*   Updated: 2024/10/30 15:24:36 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*buffer;
	char	*to;
	size_t	k;

	k = 0;
	buffer = malloc(len);
	if (!buffer || (!src && !dst))
		return (dst);
	to = (char *)dst;
	while (k < len)
	{
		buffer[k] = ((char *)src)[k];
		k++;
	}
	while (len > 0)
	{
		len--;
		to[len] = buffer[len];
	}
	free(buffer);
	return (dst);
}
