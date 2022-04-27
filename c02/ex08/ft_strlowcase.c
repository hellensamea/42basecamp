char *ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int        main(void)
{
    char    *str_base;
    char    str_lower[6];
    int        index;

    str_base = "HELl0";
    index = 0;
    while (index < 6)
    {
        str_lower[index] = str_base[index] + 0;
        index++;
    }
    ft_strlowcase(&str_lower[0]);
    printf("Precisa estar normal    : %s\n", str_base);
    printf("Precisa estar em minúsculo: %s\n", str_lower);
}