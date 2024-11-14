/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:40:18 by wimam             #+#    #+#             */
/*   Updated: 2024/11/14 21:00:20 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	end_trim(const char *s1, const char *set, int len)
{
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*buffer;

	if (!s1)
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	len = end_trim(s1, set, len);
	buffer = malloc(len + 1);
	if (!buffer)
		return (NULL);
	ft_memcpy(buffer, s1, len);
	buffer[len] = '\0';
	return (buffer);
}
