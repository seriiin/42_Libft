/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 21:37:27 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/09 16:58:15 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			s_len;
	unsigned int	i;
	char			*ret;

	s_len = ft_strlen((char *)s);
	if (!(ret = (char *)malloc(sizeof(char) * (s_len + 1))))
		return (char *)0;
	i = 0;
	while (i < s_len)
	{
		ret[i] = f(i, s[i]);
		++i;
	}
	ret[i] = '\0';
	return (ret);
}
