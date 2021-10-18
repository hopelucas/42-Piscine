char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	x;

	a = 0;
	x = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (x < nb && src[x])
	{
		dest[a] = src[x];
		a++;
		x++;
	}
	dest[a] = '\0';
	return (dest);
}

#include <stdio.h>

int main()
{
	char a[20] = "1234";
	char b[20] = "6789";

	char *t = ft_strncat(a, b, 5);
	printf("%s\n", t);
	return (0);
}
