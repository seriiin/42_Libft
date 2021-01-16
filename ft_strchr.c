/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 21:34:20 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/09 16:55:03 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int s_len;

	s_len = ft_strlen((char *)s);
	while (s_len-- >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		++s;
	}
	return (NULL);
}
