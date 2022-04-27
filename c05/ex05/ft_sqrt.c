int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	if (nb <= 0)
		return (0);
	while (nb/i > i)
		i++;
	if (nb/i == i && nb%i == 0)
		return (i);
	return (0);
}
#include <stdio.h>
int ft_sqrt(int nb);

int main(void) {
    int n = 214748;

    printf("SqRt de %d = %d\n", n, ft_sqrt(n));
}