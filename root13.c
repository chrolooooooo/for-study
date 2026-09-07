#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc >= 2)
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j] !='\0')
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'm')
				{
					argv[i][j] += 13;
					write(1, &argv[i][j], 1);
				}
				else if (argv[i][j] >= 'n' && argv[i][j] <= 'z')
				{
					argv[i][j] -= 13;
					write(1, &argv[i][j], 1);
				}
				else if (argv[i][j] >= 'A' && argv[i][j] <= 'M')
				{
					argv[i][j] += 13;
					write(1, &argv[i][j], 1);
				}
				else if (argv[i][j] >= 'N' && argv[i][j] <= 'Z')
				{
					argv[i][j] -= 13;
					write(1, &argv[i][j], 1);
				}
				else if (!((argv[i][j] >= 'a' && argv[i][j] <= 'z') 
						|| (argv[i][j] >= 'A' && argv[i][j] <= 'Z')))
					write(1, &argv[i][j] , 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
