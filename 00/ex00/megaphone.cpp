#include <unistd.h>
#include <iostream>
#include <string>
#include <locale>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; argv[i]; i++)
		{
			int	j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] -= 32;
				write(1, &argv[i][j], 1);
				j++;
			}
		}
		write(1, "\n", 1);
	}
	return (0);
}