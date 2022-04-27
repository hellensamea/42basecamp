#include <unistd.h>
#include <stdio.h>

void	ft_print_comb2(void);

int main(void)
{
	ft_print_comb2();
	return (0);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	twodigits(int number)
{
	int	first;
	int	second;

	first = number / 10;
	second = number % 10;
	ft_putchar(first + '0');
	ft_putchar(second + '0');
}

void	ft_print_comb2(void)
{
	int	numb1;
	int	numb2;

	numb1 = 0;
	numb2 = 1;
	while (numb1 <= 98)
	{
		numb2 = numb1 +1;
		while (numb2 <= 99)
		{
			twodigits(numb1);
			write(1, " ", 1);
			twodigits (numb2);
			if (numb1 != 98 || numb2 != 99)
			{
				write(1, ", ", 2);
			}
			numb2++;
		}
		numb1++;
	}	
}
