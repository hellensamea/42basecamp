#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int	main(int argc, char *argv[ ])
{
	int	i;
	int j;

	i = 1;
	j = 2;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		ft_strcmp(argv[j], argv[j + 1])
			if 
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 - *s2 != 0)
		{
			return (((int)(unsigned char)*s1) - ((int)(unsigned char)*s2));
		}
		s1++;
		s2++;
	}
	return (0);
}
