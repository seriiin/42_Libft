/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 21:27:51 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/09 17:01:02 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		starti;
	int		endi;

	starti = 0;
	while (s1[starti] && ft_strchr(set, s1[starti]))
		++starti;
	endi = ft_strlen((char *)s1) - 1;
	if (starti == endi + 1)
		return (ft_strdup(""));
	while (s1[endi] && ft_strchr(set, s1[endi]))
		--endi;
	if (starti >= endi)
		return (ft_strdup(""));
	if (!(ret = (char *)malloc(endi - starti + 2)))
		return (char *)0;
	ft_strlcpy(ret, &s1[starti], endi - starti + 2);
	return (ret);
}
