/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:07:50 by lagirard          #+#    #+#             */
/*   Updated: 2017/01/12 14:47:02 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		n;
	int		i;

	i = 0;
	n = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (dest == NULL)
		return (0);
	else
	{
		while (s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
		dest[n] = '\0';
	}
	return (dest);
}
