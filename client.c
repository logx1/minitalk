/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:04:03 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/12/25 16:37:13 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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
			kill(ft_atoi(pid), SIGUSR1);
		if (bit[i] == '1')
			kill(ft_atoi(pid), SIGUSR2);
	i++;
		usleep(300);
	}
	free(bit);
}

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[2][i])
	{
		char_send(argv[1], (unsigned char)argv[2][i]);
		i++;
	}
	return (0);
}
