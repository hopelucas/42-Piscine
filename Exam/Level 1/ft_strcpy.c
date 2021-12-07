char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char b[20] = "hello world!";
	char a[20] = "yo";
	char *t;
	t = ft_strcpy(a, b);
	printf("%s\n", a);
	return(0);
}
*/
