/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:25:32 by wimam             #+#    #+#             */
/*   Updated: 2024/11/07 13:04:27 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define L_MAX 9223372036854775807UL
#define L_MIN 9223372036854775808UL

static	int	ft_skip(const char *str, const char *ret)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (ft_memcmp(ret, "index", 5) == 0)
		return (i);
	else
		return (sign);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	long			result;
	unsigned long	tmp_result;

	i = ft_skip(str, "index");
	sign = ft_skip(str, "sign");
	result = 0;
	tmp_result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		tmp_result = ((tmp_result * 10 + (str[i] - '0')));
		if (tmp_result >= L_MAX && sign == 1)
			return (-1);
		if (tmp_result >= L_MIN && sign == -1)
			return (0);
		i++;
	}
	return (result * sign);
}


// #include <stdio.h>
// int main()
// {

// 	printf("------ over flow -----\n\n");
// 	printf("expected : %d | got : %d\n", atoi("9223372036854775805"), ft_atoi("9223372036854775805"));
// 	printf("expected : %d | got : %d\n", atoi("9223372036854775806"), ft_atoi("9223372036854775806"));
// 	printf("expected : %d | got : %d\n", atoi("9223372036854775807"), ft_atoi("9223372036854775807"));  // MAX
// 	printf("expected : %d | got : %d\n", atoi("9223372036854775808"), ft_atoi("9223372036854775808"));
// 	printf("expected : %d | got : %d\n", atoi("9223372036854775809"), ft_atoi("9223372036854775809"));


// 	printf("------ under flow -----\n\n");
// 	printf("expected : %d | got : %d\n", atoi("-9223372036854775806"), ft_atoi("-9223372036854775806"));
// 	printf("expected : %d | got : %d\n", atoi("-9223372036854775807"), ft_atoi("-9223372036854775807"));
// 	printf("expected : %d | got : %d\n", atoi("-9223372036854775808"), ft_atoi("-9223372036854775808")); // MIN
// 	printf("expected : %d | got : %d\n", atoi("-9223372036854775809"), ft_atoi("-9223372036854775809"));
// 	printf("expected : %d | got : %d\n", atoi("-9223372036854775809"), ft_atoi("-9223372036854775810"));
// 	return (0);
// }