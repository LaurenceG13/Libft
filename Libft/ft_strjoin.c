/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 19:46:22 by lagirard          #+#    #+#             */
/*   Updated: 2016/12/23 20:17:36 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		n;

	if (s1 && s2)
	{
		n = ft_strlen((char *)s1) + ft_strlen((char *)s2);
		dest = (char *)malloc(sizeof(char) * (n + 1));
		if (dest == NULL)
			return (NULL);
		dest = ft_strcpy((char *)dest, (const char *)s1);
		dest = ft_strcat((char *)dest, (const char *)s2);
		return (dest);
	}
	else
		return (NULL);
}
