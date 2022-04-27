
#include <unistd.h>

int ft_str_is_alpha(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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

    str_valid = "Hello";
    str_invalid = "Hell0";
    printf("Precisa ser 1: %d\n", ft_str_is_alpha(str_valid));
    printf("Precisa ser 0: %d\n", ft_str_is_alpha(str_invalid));
}
