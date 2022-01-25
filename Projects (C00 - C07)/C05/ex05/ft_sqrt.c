int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	i = 1;
	while ((unsigned int)(i * i) < (unsigned int)nb)
		i++;
	if (nb == i * i)
	{
		return (i);
	}
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(36));
}
