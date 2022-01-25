
#include <unistd.h>

void	ft_init_hex_table(char base[])
{
	base[0] = '0';
	base[1] = '1';
	base[2] = '2';
	base[3] = '3';
	base[4] = '4';
	base[5] = '5';
	base[6] = '6';
	base[7] = '7';
	base[8] = '8';
	base[9] = '9';
	base[10] = 'a';
	base[11] = 'b';
	base[12] = 'c';
	base[13] = 'd';
	base[14] = 'e';
	base[15] = 'f';
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	a;
	char	b;
	char	base[16];

	ft_init_hex_table(base);
	i = -1;
	while (str[++i] != '\0')
		if ((str[i] >= 32 && str[i] <= 126))
			write(1, &str[i], 1);
		else
		{
			a = base[str[i] / 16];
			b = base[str[i] % 16];
			write(1, "\\", 1);
			write(1, &a, 1);
			write(1, &b, 1);
		}
}