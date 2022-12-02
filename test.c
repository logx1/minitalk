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


int main(int argc, char **argv)
{
    int i = 0;
    char *bit = ft_strdup("00000000");
    cov(argv[2][0],bit);
  while (i < 8)
  {
      if(bit[i] == '0')
      kill(atoi(argv[1]),SIGUSR1);
      if(bit[i] == '1')
      kill(atoi(argv[1]),SIGUSR2);
      i++;
      usleep(100);
  }
  
    return (0);
}

