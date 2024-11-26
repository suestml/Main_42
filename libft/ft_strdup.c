#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
