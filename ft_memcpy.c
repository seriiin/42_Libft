/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 14:55:09 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/12 00:35:59 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *tmp;

	if (!dst && !src)
		return (void *)0;
	tmp = dst;
	while (n--)
	{
		*tmp = *(char *)src;
		++tmp;
		++src;
	}
	return (dst);
}
