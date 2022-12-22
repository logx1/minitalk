/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:43:09 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/10/23 12:57:45 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *length);
void	ft_putstr(char *str, int *length);
void	ft_putnbr(int num, int *length);
void	ft_putnbr_x(unsigned int num, char x, int *length);
void	ft_putnbr_u(unsigned int nbr, int *length);
void	ft_putadd(void *add, int *length);
#endif
