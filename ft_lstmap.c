/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:12:28 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/12 00:33:37 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *cursor;
	t_list *ret;

	cursor = lst;
	if (!lst || !f)
		return (t_list *)0;
	if (!(ret = ft_lstnew(f(cursor->content))))
		return (t_list *)0;
	cursor = cursor->next;
	while (cursor)
	{
		if (!(new = ft_lstnew(f(cursor->content))))
		{
			ft_lstclear(&ret, del);
			return (t_list *)0;
		}
		ft_lstadd_back(&ret, new);
		cursor = cursor->next;
	}
	return (ret);
}
