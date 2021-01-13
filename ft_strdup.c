/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:48:46 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/09 16:55:32 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		str_len;
	char	*ret;

	str_len = ft_strlen((char *)s1);
	if (!(ret = (char *)malloc(sizeof(char) * (str_len + 1))))
		return (NULL);
	ft_strlcpy(ret, s1, str_len + 1);
	return (ret);
}
