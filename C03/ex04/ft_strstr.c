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
		j = 0; 
		while (to_find[j] != '\0' && str[i] == to_find[j])
		{
			++j;

		}
		if (j == length)
			return (to_find);
		++i;
	}
	return NULL;
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strstr("Hello World fhjhj", "Wtorld"));
}
