/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:04:39 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/12/15 16:32:10 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	power(int i)
{
   int	nb;
   nb = 128;
   while (i < 7)
   {
      nb = nb / 2;
      i++;
   }
   return (nb);
}

static void	handler_sigusr(int signn, siginfo_t *siginfo, void *context)
{
   (void)context;
   static int i = 7;
   static int cpid ;
   static unsigned char count = 0;
   if (cpid != siginfo->si_pid)
   {
      cpid = siginfo->si_pid;
      i = 7;
      count = 0;
   }
   
    if (signn == SIGUSR2)
      count += power(i);
      i--;
      
    if (i == -1)
    {
      printf("%c",count);
      fflush(stdout);
      i = 7;
count = 0;
	kill(cpid, SIGUSR1);
	}
}

int	main(void)
{
	struct sigaction	act;
	pid_t				pid;
	
	
	
// 	sigemptyset(&act.sa_mask);
	
// 	act.sa_flags = 0;
// 	act.sa_sigaction = handler;

	act.sa_sigaction = &handler_sigusr;
	act.sa_flags = SA_SIGINFO;
	pid = getpid();
	ft_printf("PID: %d\n", pid);
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
	return (0);
}
