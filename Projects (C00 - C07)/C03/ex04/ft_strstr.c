#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*result;

	result = (char *)haystack;
	j = 0;
	if (ft_strlen(needle) == 0)
		return (result);
	while (result[j] != '\0' && len >= ft_strlen(needle))
	{
		i = 0;
		while (result[j + i] == needle[i] && result[j + i] != '\0'
			&& needle[i] != '\0')
			i++;
		if (needle[i] == '\0')
			return (&result[j]);
		j++;
		len--;
	}
	return (NULL);
}