#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
}
/*
int	main()
{
	char x[] = "this string will print!";
	ft_putstr(x);
}
*/
