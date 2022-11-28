#include <stdio.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

void	handler_sigusr2(int signum)
{
   write(1, "1", 1);
}

void	handler_sigusr1(int signum)
{
   write(1, "0", 1);
}

int	main(void)
{
   pid_t	pid;

   pid = getpid();
   printf("PID: %d\n", pid);
   signal(SIGUSR1, handler_sigusr1);
   signal(SIGUSR2, handler_sigusr2);
   while (1)
   	pause();
}
