int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fat;

	i = 0;
	fat = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb >= 0)
	{
		while (i < nb - 1)
		{
			fat = fat * (nb - i);
			i++;
		}
	}
	return (fat);
}
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int n;
	int res;

	n = -5;
	while (n <= 10)
	{
		res = ft_iterative_factorial(n);
		printf("n = %d, n! = %d\n", n, res);
		n++;
	}
	return (0);
}