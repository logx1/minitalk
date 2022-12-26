/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:04:03 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/12/25 15:52:43 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	g_ll;

void	cov(int nb, char *bit)
{
	int	i;

	i = 0;
	if (nb < 2)
	{
		while (i < 7)
		{
			bit[i] = bit[i + 1];
			i++;
		}
		bit[7] = nb + 48;
	}
	else
	{
		cov(nb / 2, bit);
		cov(nb % 2, bit);
	}
}

void	char_send(char *pid, int nb)
{
	int		i;
	char	*bit;

	i = 0;
	bit = ft_strdup("00000000");
	cov(nb, bit);
	while (i < 8)
	{
		if (bit[i] == '0')
			kill(atoi(pid), SIGUSR1);
		if (bit[i] == '1')
			kill(atoi(pid), SIGUSR2);
	i++;
		usleep(300);
	}
	free(bit);
}

void	message_received(int sig)
{
	static int	l;

	(void)sig;
	l++;
	if (l == g_ll)
	{
		ft_printf("the signal has been received successfully \n");
	}
}

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	g_ll = ft_strlen(argv[2]);
	signal(SIGUSR1, message_received);
	while (argv[2][i])
	{
		char_send(argv[1], (unsigned char)argv[2][i]);
		i++;
	}
	return (0);
}
