/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 17:03:13 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/09 17:01:31 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;

	if (*s == 0)
		return ((char *)NULL);
	if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
		return ((char *)NULL);
	if (ft_strlen((char*)s) <= start)
		substr[0] = '\0';
	else
		ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
