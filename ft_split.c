/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 23:04:31 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/15 21:08:40 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	word_num(char const *s, char c)
{
	unsigned int	num;
	int				i;

	i = 0;
	num = 0;
	while (s[i] && s[i] == c)
		++i;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			++i;
		while (s[i] && s[i] == c)
			++i;
		++num;
	}
	return (num);
}

char			*set(char *ret, char *start, size_t size)
{
	if (!(ret = (char *)malloc(size)))
		return (char *)0;
	ft_strlcpy(ret, start, size);
	return (ret);
}

static char		**memfree(char **ret)
{
	size_t	i;

	i = 0;
	while (ret[i])
	{
		free(ret[i]);
		i++;
	}
	free(ret);
	return ((char **)NULL);
}

char			**ft_split(char const *str, char c)
{
	char			**ret;
	unsigned int	w_num;
	unsigned int	i;
	char			*start;

	i = 0;
	w_num = word_num(str, c);
	if (!(ret = (char **)malloc(sizeof(char *) * (w_num + 1))))
		return (char **)0;
	while (i < w_num)
	{
		while (*str && *str == c)
			++str;
		start = (char *)str;
		while (*str && *str != c)
			++str;
		if (!(ret[i] = set(ret[i], start, str - start + 1)))
			return (memfree(ret));
		++i;
	}
	ret[i] = (char *)0;
	return (ret);
}
