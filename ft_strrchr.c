/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 15:40:00 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/09 17:00:24 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int s_len;

	s_len = ft_strlen((char *)s);
	if ((char)c == '\0')
		return ((char *)s + s_len);
	while (s_len--)
	{
		if (*(s + s_len) == (char)c)
			return ((char *)(s + s_len));
	}
	return (NULL);
}
