/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:10:06 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/23 11:53:22 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadd_hex(unsigned long int nbr, int *length)
{
	unsigned long int	base_len;
	char				*base;

	base_len = 16;
	base = "0123456789abcdef";
	if (nbr < base_len)
		ft_putchar(base[nbr % base_len], length);
	else
	{
		ft_putadd_hex(nbr / base_len, length);
		ft_putadd_hex(nbr % base_len, length);
	}
}

void	ft_putadd(void *add, int *length)
{
	unsigned long int	ptr;

	ptr = (unsigned long int)add;
	ft_putstr("0x", length);
	ft_putadd_hex(ptr, length);
}
