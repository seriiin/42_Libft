/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selchoi <selchoi@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 23:06:54 by selchoi           #+#    #+#             */
/*   Updated: 2021/01/12 00:33:01 by selchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *tmp;

	if (!lst)
		return (t_list *)0;
	tmp = lst;
	while (1)
	{
		if (!tmp->next)
			return (tmp);
		tmp = tmp->next;
	}
}
