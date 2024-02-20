#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int	i;

	i = 0;

	if (str[i] == '\0')
        return (1);

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str [i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str)
}

int	main()
{
	printf("%d", ft_str_is_printable("asA?"));
//	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
