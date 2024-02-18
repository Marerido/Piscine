
void	ft_ultimate_div_mod(int *a, int *b)
{
	char	c;
	char	d;

	c = *a / *b;
	d = *a % *b;

	*a = c;
	*b = d;
}

/*
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 10;
	j = 3;

	printf("%d, %d \n", i, j);

	ft_ultimate_div_mod(&i,&j);

	printf("%d, %d \n", i, j);
}
*/
