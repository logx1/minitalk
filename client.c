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
void shiftt(char *str)
{
    int i = 0;
    while (i < 7)
    {
        str[i] = str[i + 1];
        i++;
    }
}

void cov(int nb, char *bit)
{   

    if (nb < 2)
    {
        shiftt(bit);
        bit[7] = nb + 48;
    
    }else
    {
        cov(nb / 2,bit);
        cov(nb % 2,bit);
    }
}

void char_send(char *pid,int nb)
{
    int i = 0;
    char *bit = ft_strdup("00000000");
    cov(nb,bit);
  while (i < 8)
  {
      if(bit[i] == '0')
      kill(atoi(pid),SIGUSR1);
      if(bit[i] == '1')
      kill(atoi(pid),SIGUSR2);
      i++;
      usleep(50);
  }
}



int main(int argc, char **argv)
{
    int i = 0;
    
    while (argv[2][i])
    {
        char_send(argv[1],argv[2][i]);
        i++;
    }

    

   
    return (0);
}