#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>

void cov(int nbr,int k)
{
    int str[8];
    int i = 0;
    if (nbr < 2)
    {
    
        if (nbr == 0)
            kill(k,SIGUSR1);
        if (nbr == 1)
            kill(k,SIGUSR2);
            usleep(100);
    }
    else 
    {
        cov(nbr / 2,k);
        cov(nbr % 2,k);
    }

}
int main(int argc, char *argv[])
{
        int i = atoi(argv[1]);
    cov(argv[2][0],i);
    return (0);
}
