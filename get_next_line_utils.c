#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
    size_t  len;
    char    *str;

    if(!s)
        return (NULL);
    str = malloc (len + 1);
    if(!str)
        return (NULL);
    len = ft_strlen(s);
    while(s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

size_t  ft_strlen(char  const   *s)
{
    size_t  j;

    j = 0;
    while(s[j])
    {
        j++;
    }
    return (j);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
    size_t  lens1;
    size_t  lens2;
    int  i;
    char    *ptr;

    i = 0;
    if (!s1)
        return (NULL);
    if(!s2)
        return (ft_strdup(""));
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	ptr = malloc(lens1 + lens2 + 1);
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
