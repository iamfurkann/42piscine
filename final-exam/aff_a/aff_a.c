#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int j;
	
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return 0;
	
	}
	while (argv[1][i])
	{	
		if (argv[1][i] == 'a')
		{
			write(1, "a\n", 2);
			return 0;
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
