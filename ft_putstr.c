/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:51:14 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/23 13:13:06 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *length)

{
	int	i;

	i = 0;
	if (&str[i] == NULL)
		ft_putstr("(null)", length);
	while (&str[i] && str[i])
	{
		ft_putchar(str[i], length);
		i++;
	}
}
