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
   static int count = 0;
    if (signn == SIGUSR2)
      count += power(i);
      i--;
      printf("%d \n",i);
    if (i == 0)
    {
      printf("++++%d+++++",count);
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
      sleep(5);
   }

   
   return (0);
}
