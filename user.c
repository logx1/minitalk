#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>

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

int cov(int nbr)
{

    int str[8];
    int i = 0;
   
    if (nbr < 2)
    {
        printf("%d" , nbr);
        str[i++] = nbr;
    }
    else 
    {
        cov(nbr / 2);
        cov(nbr % 2);
    }
    return(str[2]);
}
int main(int argc, char *argv[])
{
    
    int x = '0';
    printf("%d",cov(x));
    //cov(x);
    // ft_putadd_hex(x);
    // int i = atoi(argv[1]);
    // if (argv[2][0] == 'c')
    // {
    //    kill(i,SIGUSR1);
    // }
    
    // if (argv[2][0] == 'd')
    //     kill(i,SIGUSR2);
    return (0);
}