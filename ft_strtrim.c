/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:40:18 by wimam             #+#    #+#             */
/*   Updated: 2024/10/30 15:54:49 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_check(const	char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

static int	end_trim(const char *s1, const char *set, int len)
{
	while (len > 0 && set_check(s1[len - 1], set))
		len--;
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*buffer;

	if (!s1)
		return (NULL);
	while (*s1 != '\0' && set_check(*s1, set))
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
