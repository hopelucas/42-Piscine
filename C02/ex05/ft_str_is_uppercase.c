int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] < 'A' || str[x] > 'Z')
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
	int isupper;
    char a[] = "AAAAAAAAGH";
    isupper = ft_str_is_uppercase(a);
    printf("%d\n", isupper);
}
*/
