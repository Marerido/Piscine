int valide_character(char *str)
{
    int i;
    int sign;

    i = 0;
    sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')		++i;
	while (str[i] == '-' || str[i] == '+')
    	{
		if (str[i] == '-')
			sign *= -1;
		else
			sign *= 1;
		++i;
    	}
	return (sign);
}
   

int ft_atoi(char *str)
{
    int i;
    int sign;
    int number;

    i = 0;
    number = 0;
    sign = valide_character(str);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	    ++i;
    while (str[i] >= '0' && str[i] <= '9')
    {
	number = number*10 + (str[i] - '0');
        ++i;
    }
    number = number*sign;
    return (number);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", valide_character("--+"));
	printf("%d\n", ft_atoi("   126"));
	printf("%d\n", ft_atoi("+126"));
	printf("%d\n", ft_atoi("--+126"));
}

