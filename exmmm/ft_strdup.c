#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

char 	*ft_strdup(char *src)
{
	int	j;
	int i;
	char *new;

	j = 0;
	i = 0;
	if (!(new = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
	{
		return NULL;
	}
	while (src[i])
	{
		new[j] = src[i];
		j++;
		i++;
	}
	new[j] = '\0';
	return (new);
	}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s", ft_strdup(av[1]));
	}
	return (0);
	}

