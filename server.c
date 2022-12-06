/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdel-ou <abdel-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:04:39 by abdel-ou          #+#    #+#             */
/*   Updated: 2022/12/06 13:07:05 by abdel-ou         ###   ########.fr       */
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
void	handler_sigusr(int signn)
{
   static int i = 7;
   static unsigned char count = 0;
    if (signn == SIGUSR2)
      count += power(i);
      i--;
      
    if (i == -1)
    {
      printf("%d",count);
      fflush(stdout);
      i = 7;
count = 0;
    }  
 
}
int	main(void)
{
   int nb = 0;
   pid_t	pid;

   pid = getpid();
   printf("PID: %d\n", pid);
   signal(SIGUSR1, handler_sigusr);
   signal(SIGUSR2, handler_sigusr);

   while (1)
   { 
      pause();
   }
   return (0);
}
