/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 10:47:38 by prossi            #+#    #+#             */
/*   Updated: 2016/12/26 10:57:15 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*listnext;

	list = *alst;
	while (list)
	{
		listnext = list->next;
		del(list->content, list->content_size);
		free(list);
		list = listnext;
	}
	*alst = NULL;
}
