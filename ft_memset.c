/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 14:08:53 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/09 16:51:59 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*tmp;
	size_t	i;

	tmp = b;
	i = 0;
	while (i < len)
	{
		*(char *)tmp = c;
		++i;
		++tmp;
	}
	return (b);
}
