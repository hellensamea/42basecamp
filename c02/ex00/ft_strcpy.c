#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char *src;
	char *dest;

	src = calloc(19, sizeof(char));
	src = "alo galera de cowboy";
	dest = calloc(19, sizeof(char));
	ft_strcpy(dest, src);	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//uso i como contador para passar por cada caractere da string src até chegar no caractere \0
//dest está recebendo os valores de src conforme o contador vai passando
//quando chegar ao fim de src retorna dest para main