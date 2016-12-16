/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 14:09:12 by prossi            #+#    #+#             */
/*   Updated: 2016/11/26 16:33:21 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(big) == 0 && ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && len != 0)
	{
		j = 0;
		while (big[i] == little[j] && little[j] && i <= len)
		{
			i++;
			j++;
		}
		if (little[j] == '\0' || j == len)
			return ((char *)big + (i - j));
		i = i - j;
		i++;
	}
	return (NULL);
}
