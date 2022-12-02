#include <stdio.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

void	handler_sigusr(int signn)
{
   static int i ;
   static int c;
   if (signn == SIGUSR1)
      write(1, "0", 1);
    if (signn == SIGUSR2)
      write(1, "1", 1);
   
   
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
}