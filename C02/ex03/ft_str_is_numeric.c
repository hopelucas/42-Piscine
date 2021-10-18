int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] < '0' || str[x] > '9')
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
	int is_numeric;
    char a[] = "abc";
    is_numeric = ft_str_is_numeric(a);
    printf("%d\n", is_numeric);
}
*/
