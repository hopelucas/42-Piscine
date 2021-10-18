#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (0);
	range = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include<stdio.h>
int main()
{
	int min = -4;
	int max = 9;

	printf("%d\n", *ft_range(min, max));
}
*/
