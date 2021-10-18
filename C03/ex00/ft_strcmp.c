#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] < s2[x])
		{
			return (-1);
		}
		if (s1[x] > s2[x])
		{
			return (1);
		}
		x++;
	}
	return (0);
}


#include <stdio.h>
int main()
{
	int	strcmp;

	char a[] = "abCd";
	char b[] = "abcd";
	strcmp = ft_strcmp(a, b);
	printf("%d\n", strcmp);
	return (0);
} 
