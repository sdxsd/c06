#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*ptr;
	int		iterator;

	ptr = argv[0];
	iterator = 0;
	if (argc)
		;
	while (ptr[iterator] != '\0')
	{
		++iterator;
	}
	write(1, ptr, iterator);
}
