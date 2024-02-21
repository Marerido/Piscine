#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str [i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char    *ft_strcapitalize(char *str)
{
    int i;

    i = 0;

    str = ft_strlowcase(str);

    while (str[i] != '\0')
    {
        if (' ' || !(str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i+1] = str[i] + 32;
        }
    }
    return (str);
}

int	main()
{
	char str[] = "shfdj sa Sdgf-a ?s";
	printf("%s", ft_strcapitalize(str);
//	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
