#include "get_next_line.h"

size_t	ft_strlen(char const *s)
{
	size_t	j;

	j = 0;
	while (s[j])
	{
		j++;
	}
	return (j);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	lens1;
	size_t	lens2;
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	if (!s2)
		return (NULL);
	if (!s1)
		s1 = ft_strdup("");
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ptr = (char *)malloc(lens1 + lens2 + 1);
	if (!ptr)
		return (NULL);
	i = -1;
	while (s1[++i])
		ptr[i] = s1[i];
	j = 0;
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == '\0')
		return ((char *)s + i);
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;
	size_t			l;
	size_t			sub_len;

	l = ft_strlen(s);
	if (start >= l)
	{
		ptr = (char *)malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	sub_len = l - (size_t)start;
	if (sub_len > len)
		sub_len = len;
	ptr = (char *)malloc(sub_len + 1);
	if (!ptr)
		return (NULL);
	i = -1;
	while (s[++i + start] && i < len)
		ptr[i] = s[i + start];
	ptr[i] = '\0';
	return (ptr);
}
