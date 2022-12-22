/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:13:36 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/23 13:18:48 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_type(va_list args, char format, int *length)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int), length);
	if (format == 's')
		ft_putstr(va_arg(args, char *), length);
	if (format == 'i' || format == 'd')
		ft_putnbr(va_arg(args, int), length);
	if (format == 'x' || format == 'X')
		ft_putnbr_x(va_arg(args, int), format, length);
	if (format == '%')
		ft_putchar(format, length);
	if (format == 'u')
		ft_putnbr_u(va_arg(args, unsigned int), length);
	if (format == 'p')
		ft_putadd(va_arg(args, void *), length);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			length;

	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			ft_putchar(format[i], &length);
		if (format[i] == '%')
		{
			i++;
			get_type(args, format[i], &length);
		}
	i++;
	}
	va_end(args);
	return (length);
}
