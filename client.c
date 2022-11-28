#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// void	ft_putadd_hex(int nbr)
// {
//     int i = 0;
// 	if (nbr < 2)
// 		ft_putchar(nbr % 2 + 48);
// 	else
// 	{
// 		ft_putadd_hex(nbr / 2);
// 		ft_putadd_hex(nbr % 2);
// 	}
// }

int cov(int nbr,int k)
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
    return(str[2]);
}
int main(int argc, char *argv[])
{
    
  
        int i = atoi(argv[1]);
        
    cov(argv[2][0],i);
    //cov(x);
    // ft_putadd_hex(x);

    
    return (0);
}
