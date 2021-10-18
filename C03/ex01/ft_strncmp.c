int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main()
{
	int strncmp;
	int n = 5;

	char a[] = "abcdEfg";
	char b[] = "abcdefg";
	strncmp = ft_strncmp(a, b, n);
	printf("%d\n", strncmp);
	return (0);
}
