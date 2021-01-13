/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 20:33:18 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/09 16:56:36 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t srci;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	srci = 0;
	if (dstsize == 0)
		return (srclen);
	while (dstlen + srci < dstsize - 1 && src[srci] != 0)
	{
		dst[dstlen + srci] = src[srci];
		++srci;
	}
	dst[dstlen + srci] = '\0';
	if (dstsize > dstlen)
		return (srclen + dstlen);
	return (srclen + dstsize);
}
