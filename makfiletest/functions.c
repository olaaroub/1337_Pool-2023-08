#include <unistd.h>
#include "functions.h"

void	ft_print_hello()
{
	ft_putstr("hello, i am oussama laaroubi cd kljd duhq.\n");
}

void	ft_putstr(char	*str)
{
	int	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
