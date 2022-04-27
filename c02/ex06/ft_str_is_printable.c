int ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 && str[i] > 126)
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

    str_valid = "Hell0";
    str_invalid = "hello\7F";
    printf("Precisa ser 1: %d\n", ft_str_is_printable(str_valid));
    printf("Precisa ser 0: %d\n", ft_str_is_printable(str_invalid));
}