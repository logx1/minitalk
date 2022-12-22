/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:41:31 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/23 13:00:24 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *length)
{
	long int	nbr;

	nbr = num;
	if (nbr < 0)
	{
		ft_putchar('-', length);
		nbr *= -1;
	}
	if (nbr < 10)
	{
		ft_putchar(nbr + 48, length);
	}
	else
	{
		ft_putnbr(nbr / 10, length);
		ft_putnbr(nbr % 10, length);
	}
}
