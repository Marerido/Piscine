#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(int argc, char **argv)
{
	int	i;
	int	*range;

	i = 0;
	if (argc == 3)
	{
		range = ft_range(atoi(argv[1]), atoi(argv[2]));
		while (range[i] != 0)
		{
			printf("%d", range[i]);
			i++;
		}
		printf("\n");

		free(range);
	}
	return (0);
}
