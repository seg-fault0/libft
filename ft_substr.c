/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:04:00 by wimam             #+#    #+#             */
/*   Updated: 2024/10/28 12:04:34 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*buffer;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (unsigned int)ft_strlen(s + start))
		len = (unsigned int)ft_strlen(s + start);
	buffer = malloc(len + 1);
	if (!buffer)
		return (NULL);
	while (s[start] != '\0' && i < len)
	{
		buffer[i] = s[start];
		i++;
		start ++;
	}
	buffer[i] = '\0';
	return (buffer);
}
