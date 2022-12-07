#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int ft_strlen(char *str)
{
    int i = 0 ;
    while (str[i != '\0'])
    i++;
    return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (&str[i] && str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main()
{
   char *c ;
    c = "🤣";
    ft_putstr(c);

    return (0);
}
