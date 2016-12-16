/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 14:58:48 by prossi            #+#    #+#             */
/*   Updated: 2016/12/13 16:02:10 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_countwords(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		nbw;

	i = 0;
	j = 0;
	nbw = 0;
	while (s[i])
	{
		while (s[i] != c && s[i + 1])
		{
			if (j == 0)
				nbw++;
			j++;
			i++;
		}
		if (j > 0)
		{
			j = 0;
			i--;
		}
		i++;
	}
	return (nbw);
}
