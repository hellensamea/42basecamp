#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str != '\0')
	{
		str++;
		size++;
	}
	return (size);
}
