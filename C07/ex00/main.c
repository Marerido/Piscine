#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char *mine;
	char *theirs;

	if (argc == 2)
	{
		mine = ft_strdup(argv[1]);
		theirs = strdup(argv[1]);
		printf("ft_strdup %s | strdup %s\n", mine, theirs);
	}
	return (0);
}
