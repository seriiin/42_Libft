/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 17:53:00 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/12 00:35:22 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)dst;
	while (n--)
	{
		*tmp = *(unsigned char *)src;
		++tmp;
		if (*(unsigned char *)src == (unsigned char)c)
			return (tmp);
		++src;
	}
	return (NULL);
}
