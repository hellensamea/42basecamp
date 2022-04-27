int ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
int        main(void)
{
    char *str_valid;
    char *str_invalid;

    str_valid = "HELLO";
    str_invalid = "HELLo";
    printf("Precisa ser 1: %d\n", ft_str_is_uppercase(str_valid));
    printf("Precisa ser 0: %d\n", ft_str_is_uppercase(str_invalid));
}