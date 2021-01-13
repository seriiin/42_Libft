/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:29:14 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/12 00:37:38 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		n_size(int n)
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

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		size;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		size = n_size(n);
		if (n < 0)
		{
			str[0] = '-';
			n *= -1;
		}
		str[size] = '\0';
		while (--size >= 0 && str[size] != '-')
		{
			str[size] = n % 10 + '0';
			n /= 10;
		}
		ft_putstr_fd(str, fd);
	}
}
