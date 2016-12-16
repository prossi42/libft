/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:58:19 by prossi            #+#    #+#             */
/*   Updated: 2016/12/02 11:25:24 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*newalloc;

	if (!(newalloc = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	ft_memset(newalloc, 0, size);
	return (newalloc);
}
