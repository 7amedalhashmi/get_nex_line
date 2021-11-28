#include "get_next_line.h"

size_t	ft_strlen(char *c)
{
	if (*c == 0)
		return (0);
	return (ft_strlen(c + 1) + 1);
}

char	*ft_strchr(char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
		if (*s++ == (char)c)
			return ((char *)s - 1);
	if (!c)
		return ((char *)s);
	return ((char *) NULL);
}

char    *ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[i])
			str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free (s1);
	return (str);
}
