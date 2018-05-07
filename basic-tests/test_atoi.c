/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 11:40:57 by lagirard          #+#    #+#             */
/*   Updated: 2016/12/22 12:46:06 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	ft_putstr("9223372036854775807 \n");
    ft_putnbr(atoi("9223372036854775807"));
	ft_putstr(" = atoi\n");
	ft_putnbr(ft_atoi("9223372036854775807"));
	ft_putstr(" = ft_atoi\n");
	ft_putchar('\n');
    ft_putstr("-9223372036854775808 \n");
	ft_putnbr(atoi("-9223372036854775808"));
	ft_putstr(" = atoi\n");
	ft_putnbr(ft_atoi("-9223372036854775808"));
	ft_putstr(" = ft_atoi\n");
    ft_putchar('\n');
    ft_putstr("99999999999999999999999999 \n");
    ft_putnbr(atoi("99999999999999999999999999"));
    ft_putstr(" = atoi\n");
    ft_putnbr(ft_atoi("99999999999999999999999999"));
    ft_putstr(" = ft_atoi\n");
    ft_putchar('\n');
    ft_putstr("-99999999999999999999999999 \n");
    ft_putnbr(atoi("-99999999999999999999999999"));
    ft_putstr(" = atoi\n");
    ft_putnbr(ft_atoi("-99999999999999999999999999"));
    ft_putstr(" = ft_atoi\n");
	return (0);
}
