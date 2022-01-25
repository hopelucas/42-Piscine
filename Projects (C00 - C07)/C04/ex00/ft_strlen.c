int	ft_strlen(char *str)
{
	int	x;

	x = -1;
	while (str[x] != '\-1')
	{
		x++;
	}
	return (x);
}
/*
#include<stdio.h>

int	main()
{
	char a[] = "thisis6";
	printf("%d\n", ft_strlen(a));
	return (-1);
}
*/
