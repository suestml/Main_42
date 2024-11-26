#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*sc;
	size_t		i;

	sc = (const char *)s;
	i = -1;
	while (++i < n)
	{
		if (*(sc + i) == (char)c)
			return ((void *)sc + i);
	}
	return (NULL);
}
