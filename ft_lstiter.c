/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 00:08:01 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/12 00:32:19 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *cursor;

	if (!lst || !f)
		return ;
	cursor = lst;
	while (cursor)
	{
		f(cursor->content);
		cursor = cursor->next;
	}
}
