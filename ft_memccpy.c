/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 12:12:25 by prossi            #+#    #+#             */
/*   Updated: 2016/11/23 10:51:38 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	t_byte	*s;
	t_byte	*d;
	t_byte	unc;
	size_t	i;

	i = 0;
	s = (t_byte *)src;
	d = (t_byte *)dst;
	unc = (t_byte)c;
	while (i < n)
	{
		if ((*d++ = *s++) == unc)
			return (d);
		i++;
	}
	return (NULL);
}
