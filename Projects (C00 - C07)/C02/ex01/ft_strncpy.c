char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char a[20] = "";
	char b[20] = "hello world!";
	char *t;
	t = ft_strncpy(a, b, 5);
	printf("%s\n",t);
	return(0);
}
*/
