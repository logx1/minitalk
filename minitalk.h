/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:57:18 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/12/11 17:22:51 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MINITALK_H
# define MINITALK_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

char	*ft_strdup(char *s1);
void shiftt(char *str);
void cov(int nb, char *bit);
void char_send(char *pid,int nb);
int power(int i);




#endif