char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}

/*The strcat() function appends the src string to the dest string,
overwriting the terminating null byte ('\0') at the end of dest, and then adds a terminating null byte.*/