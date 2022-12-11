/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:04:39 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/12/11 14:02:52 by abdel-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
int power(int i)
{
   int nb = 128;
   while (i < 7)
   {
      nb = nb / 2;
      i++;
   }
   return (nb);
}
static void	handler_sigusr(int signn, siginfo_t *siginfo, void *context)
{
   static int i = 7;
   static unsigned char count = 0;
    if (signn == SIGUSR2)
      count += power(i);
      i--;
      
    if (i == -1)
    {
      printf("%c",count);
      fflush(stdout);
      i = 7;
      count = 0;
      kill(siginfo->si_pid,SIGUSR1);
    }  
 
}
int	main(void)
{
   int nb = 0;
   struct sigaction act;
   pid_t	pid;

    act.sa_sigaction = &handler_sigusr;
    act.sa_flags = SA_SIGINFO;
   pid = getpid();
   printf("PID: %d\n", pid);
   sigaction(SIGUSR1, &act, NULL);
   sigaction(SIGUSR2, &act, NULL);
   
   while (1)
   { 
      pause();
   }
   return (0);
}
