#include "get_next_line.h"

size_t	ft_strlen(char *c)
{
	int i;

	if (!c)
		return (0);
	i = 0;
	while (c[i])
		i++;
	return (i);
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
	int		i;
	int		j;

	if (!s1 && !s2)
		return (0);
	i = 0;
	j = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	if (s1)
	{
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
	}
	while (s2[j] != 0)
		str[i++] = s2[j++];
	str[i] = 0 ;
	free (s1);
	return (str);
}
