#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
int        main(void)
{
    char *str_valid;
    char *str_invalid;

    str_valid = "123456";
    str_invalid = "123A56";
    printf("Precisa ser 1: %d\n", ft_str_is_numeric(str_valid));
    printf("Precisa ser 0: %d\n", ft_str_is_numeric(str_invalid));
}
