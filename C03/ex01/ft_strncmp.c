int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
			++i;
		else if (s1[i] < s2[i])
			return (1);
		else
			return (-1);
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello World";
	
	printf("%d\n",  ft_strncmp(str1, str2, 8));
	printf("%d\n",  ft_strncmp(str1, str2, 4));
}
