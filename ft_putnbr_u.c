/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:42:26 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/23 11:03:26 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int nbr, int *length)
{
	if (nbr < 10)
		ft_putchar(nbr + '0', length);
	else
	{
		ft_putnbr_u(nbr / 10, length);
		ft_putnbr_u(nbr % 10, length);
	}
}
