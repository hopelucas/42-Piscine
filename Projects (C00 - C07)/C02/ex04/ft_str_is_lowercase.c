int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] < 'a' || str[x] > 'z')
		{
			return (0);
		}
		x++;
	}
	return (1);
}
/*
#include <stdio.h>
int    main(void)
{
	int islower;
    char a[] = "123";
    islower = ft_str_is_lowercase(a);
    printf("%d\n", islower);
}
*/
