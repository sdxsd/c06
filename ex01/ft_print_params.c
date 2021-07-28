#include <unistd.h>

void	ft_putstr(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
	{
		iterator++;
	}
	write(1, str, iterator);
}

int	main(int argc, char *argv[])
{
	int	iterator;

	iterator = 1;
	while (iterator < argc)
	{
		ft_putstr(argv[iterator]);
		write(1, "\n", 1);
		++iterator;
	}
}
