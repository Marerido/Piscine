char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	length = 0;
	j = 0;

	while (to_find[length] != '\0')
	{
		++length;
	}
	while (str[i] != '\0')
	{
		while (to_find[j] != '\0' && str[i+j] == to_find[j])
		{
			++j;
		}
		if (j == length)
			return (str);
	}
	++i;
}

#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strstr("HelloWorld", "World"));
}
