/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_absolute.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 18:58:08 by lagirard          #+#    #+#             */
/*   Updated: 2017/01/11 19:39:45 by lagirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
   int	n;

   ft_putstr("La valeur absolue de -987 est : ");
   ft_putnbr(ft_absolute(-987));
   ft_putstr(" \n");
   ft_putstr("La valeur absolue de 0 est : ");
   ft_putnbr(ft_absolute(0));
   ft_putstr(" \n");
   ft_putstr("La valeur absolue de 1234 est : ");
   ft_putnbr(ft_absolute(1234));
   ft_putstr(" \n");
   return (0);
}
