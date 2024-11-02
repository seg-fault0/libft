/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:05:33 by wimam             #+#    #+#             */
/*   Updated: 2024/11/02 11:26:31 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*buffer;
	size_t				i;

	buffer = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (buffer[i] == (unsigned char)c)
			return ((void *)&buffer[i]);
		i++;
	}
	return (NULL);
}
