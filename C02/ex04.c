
int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
        return (1);

    while (str[i] != '\0')
    {
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
        ++i;
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	printf("%d", ft_str_is_lowercase("01ww87493"));
	printf("\n%d", ft_str_is_lowercase("as88sd"));
	printf("\n%d", ft_str_is_lowercase("sdfs"));
}
