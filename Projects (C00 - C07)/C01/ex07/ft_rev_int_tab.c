#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	tmp;

	x = 0;
	size--;
	while (x < size)
	{
		tmp = tab[x];
		tab[x] = tab[size];
		tab[size] = tmp;
		x++;
		size--;
	}
}
