/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:25:32 by wimam             #+#    #+#             */
/*   Updated: 2024/11/02 11:31:02 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*
#include <stdio.h>
int main()
{
	printf("expected : 123         |  got : %d\n", ft_atoi("123"));
	printf("expected :-123         |  got : %d\n", ft_atoi("-123"));
	printf("expected : 0           |  got : %d\n", ft_atoi("0"));
	printf("expected : 123         |  got : %d\n", ft_atoi("123"));
	printf("expected : 2147483647  |  got : %d\n", ft_atoi("2147483647"));
	printf("expected :-2147483648  |  got : %d\n", ft_atoi("-2147483648"));
	printf("expected : 123         |  got : %d\n", ft_atoi("   123"));
	printf("expected : 123         |  got : %d\n", ft_atoi("123   "));
	printf("expected : 0           |  got : %d\n", ft_atoi("abc123"));
	printf("expected : 0           |  got : %d\n", ft_atoi("--123"));
	printf("expected : 0           |  got : %d\n", ft_atoi(""));
	printf("expected : 0           |  got : %d\n", ft_atoi("0x123"));
	printf("expected : 0           |  got : %d\n", ft_atoi("-0"));
	return (0);
}
// cc ft_atoi.c && ./a.out
*/