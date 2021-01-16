/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:01:22 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/12 00:31:00 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *cursor;
	t_list *next;

	cursor = *lst;
	while (cursor)
	{
		next = cursor->next;
		ft_lstdelone(cursor, del);
		cursor = next;
	}
	*lst = NULL;
}
