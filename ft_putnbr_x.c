/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:13:26 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/23 11:04:19 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_x(unsigned int num, char x, int *length)
{
	char	*base;

	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num < 16)
	{
		ft_putchar(base[num % 16], length);
	}
	else
	{
		ft_putnbr_x(num / 16, x, length);
		ft_putnbr_x(num % 16, x, length);
	}
}
