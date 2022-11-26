#include <stdio.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

static void sig_hand(int signo)      
{
    if (signo == SIGUSR1)
        printf("received SIGUSR1\n");
    else if (signo == SIGUSR2)
        printf("received SIGUSR2\n");
}

int main(void)
{
  signal(SIGUSR1, sig_hand);
  signal(SIGUSR2, sig_hand);
        
    while (10)
        pause();  
}