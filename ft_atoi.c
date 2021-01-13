/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:41:02 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/12 00:28:26 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	check_over_range(unsigned long long ret, int sign)
{
	if (ret > LLONG_MAX - 1 && sign == -1)
		return (0);
	if (ret > LLONG_MAX && sign == 1)
		return (-1);
	return (ret * sign);
}

int	ft_atoi(const char *str)
{
	unsigned long long	ret;
	int					i;
	int					neg;

	ret = 0;
	i = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		ret *= 10;
		ret += str[i] - '0';
		++i;
	}
	return (check_over_range(ret, neg));
}
