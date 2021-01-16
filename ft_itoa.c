/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 18:37:49 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/12 00:29:12 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		n_len(int n)
{
	int ret;
	int neg;

	ret = 0;
	neg = 1;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		neg *= -1;
		++ret;
	}
	while (n > 0)
	{
		++ret;
		n /= 10;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*ret;

	size = n_len(n);
	if (n == -2147483648)
		return (ret = ft_strdup("-2147483648"));
	if (!(ret = (char *)malloc(sizeof(char) * (size + 1))))
		return (char *)0;
	if (n < 0)
	{
		ret[0] = '-';
		n *= -1;
	}
	ret[size] = '\0';
	while (--size >= 0 && ret[size] != '-')
	{
		ret[size] = n % 10 + '0';
		n /= 10;
	}
	return (ret);
}
