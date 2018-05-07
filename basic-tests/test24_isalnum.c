/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:26:38 by lagirard          #+#    #+#             */
/*   Updated: 2016/11/25 16:28:06 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(int argc, char **argv)
{
	int		n;
	int		m;

	if (argc != 2)
		return (0);
	else
	{
		ft_putchar(argv[1][0]);
		ft_putchar('\n');
		ft_putnbr(argv[1][0]);
		ft_putchar('\n');
		n = isalnum(argv[1][0]);
		ft_putnbr(n);
		ft_putchar('\n');
		m = ft_isalnum(argv[1][0]);
		ft_putnbr(m);
		ft_putchar('\n');
		return (n);
	}
}
