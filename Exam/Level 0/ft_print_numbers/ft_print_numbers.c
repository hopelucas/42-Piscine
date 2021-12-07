#include<unistd.h>

int	main()
{
	int i;
	i = '0';

	while (i <= '9')
	{
		write (1, &i, 1);
		i++;
	}
	return (i);
}


