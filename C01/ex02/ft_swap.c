#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}
/*
#include<stdio.h>
int	main()
{
	int x = 6;
	int y = 5;

	ft_swap(&x, &y);
	printf("%i%i\n", x, y);
	return(0);
}
*/
