/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 21:40:28 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/09 16:59:47 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t needlelen;

	i = 0;
	needlelen = ft_strlen((char *)needle);
	if (*needle == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (ft_strncmp(&haystack[i], needle, needlelen) == 0
				&& i + needlelen <= len)
			return ((char *)(&haystack[i]));
		i++;
	}
	return ((char *)NULL);
}
