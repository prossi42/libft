/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:30:19 by prossi            #+#    #+#             */
/*   Updated: 2016/12/13 16:32:18 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char				**tabstr;
	unsigned int		start;
	size_t				len;
	size_t				x;
	size_t				i;

	start = 0;
	x = 0;
	i = 0;
	while (s[i])
	{
		len = 0; 
		while (s[i] != c)
		{
			if (start == 0)
				start = i;
			len++;
			i++;
		}
		if (len > 0)
		{
			if (!(tabstr[x] = ft_strsub(s, start, len)))
				return (NULL);
			x++;
		}
		i++;
	}
	return (tabstr);
}
