#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

char	*ft_strdup(char *s1)
{
	int		i;
	int		s;
	char	*b;

	s = strlen(s1);
	i = 0;
	b = malloc(sizeof(char ) * (s + 1));
	if (!b)
		return (0);
	while (s1[i] != 0)
	{
		b[i] = s1[i];
		i++;
	}
	b[i] = '\0';
	return (b);
}
int position(nb)
{
    int i = 0;
    while (nb > 0)
    {
        nb = nb / 2;
        i++;
    }
    
    return (i - 1);
}

char* cov(int nb, char *bit)
{
    static int i = 3;
   
    if (nb < 2)
    {
        bit[i] = nb + 48;
        i--;
    }else
    {
        cov(nb / 2,bit);
        cov(nb % 2,bit);
    }
   

   return (bit);
}
int main(int argc, char **argv)
{

    char *bit = ft_strdup("00000000");
     printf("%s",cov(argv[1][0],bit));
    //  printf("%d",position(48));
   
    return (0);
}
