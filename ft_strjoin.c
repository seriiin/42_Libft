/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:19:22 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/09 16:55:59 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	len;
	char	*join;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	len = len1 + len2 + 1;
	if (!(join = (char *)malloc(sizeof(char) * len)))
		return ((char *)NULL);
	ft_strlcpy(join, s1, len1 + 1);
	ft_strlcat(join, s2, len);
	return (join);
}
