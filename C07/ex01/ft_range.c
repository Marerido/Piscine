#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;	

	i = 0;

	while (min >= max)
		return NULL;
	if (!(p = (int*)malloc(sizeof(int)*(max - min + 1))))
		return NULL;
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}	
