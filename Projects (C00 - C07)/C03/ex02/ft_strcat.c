char	*ft_strcat(char *dest, char *src)

{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{	
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
#include <stdio.h>
int main ()
{
	char *t;

	char b[20] = "hi there!";
	char a[20] = "arrhgjfhgfg";

	t = ft_strcat(a, b);
	printf("%s\n", a);
	return (0);
}
