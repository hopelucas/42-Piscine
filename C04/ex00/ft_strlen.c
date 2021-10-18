int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}
/*
#include<stdio.h>

int	main()
{
	char a[] = "thisis7";
	printf("%d\n", ft_strlen(a));
	return (0);
}
*/
