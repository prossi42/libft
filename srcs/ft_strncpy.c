/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:13:01 by prossi            #+#    #+#             */
/*   Updated: 2016/11/22 13:22:47 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (src[i] == '\0')
		{
			while (i < len)
			{
				dst[i] = '\0';
				i++;
			}
		}
		else
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
