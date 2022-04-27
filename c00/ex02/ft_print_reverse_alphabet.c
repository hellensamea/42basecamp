#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ralphabet;

		ralphabet = 'z';
	while (ralphabet >= 'a')
	{
		write(1, &ralphabet, 1);
		ralphabet--;
	}
}
