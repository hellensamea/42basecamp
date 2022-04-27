#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
int        main(void)
{
    char *str_valid;
    char *str_invalid;

    str_valid = "hello";
    str_invalid = "hellO";
    printf("Precisa ser 1: %d\n", ft_str_is_lowercase(str_valid));
    printf("Precisa ser 0: %d\n", ft_str_is_lowercase(str_invalid));
}