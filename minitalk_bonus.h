/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:57:18 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/12/21 05:15:05 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <stdarg.h>

char	*ft_strdup(char *s1);
int		ft_strlen(const char *str);
void	cov(int nb, char *bit);
void	char_send(char *pid, int nb);
int		power(int i);
int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *length);
void	ft_putstr(char *str, int *length);
void	ft_putnbr(int num, int *length);
void	ft_putnbr_x(unsigned int num, char x, int *length);
void	ft_putnbr_u(unsigned int nbr, int *length);
void	ft_putadd(void *add, int *length);

#endif
