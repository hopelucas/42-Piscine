int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if ((str[x] < 'a' || str[x] > 'z') && (str[x] < 'A' || str[x] > 'Z'))
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
	int is_alpha;
    char a[] = "jriwoeu3u45";
    is_alpha = ft_str_is_alpha(a);
    printf("%d\n", is_alpha);
}
*/
