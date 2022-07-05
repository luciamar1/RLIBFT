#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *d;
    unsigned int x;

    x = len - start;
    d = malloc(x * sizeof(char)+1);
    if (d == NULL)
        return (NULL);
    s += start;
    while (x --)
        *d++ = *s++;
    *d = 0;
    return(d - (len - start) );
}

// int main(void)
// {
//     char *s = "i just want this part #############";
//     //printf("REAL = %d\n", substr(s, 0, 22));
//     printf("REAL = %s\n", ft_substr(s, 0, 22));
// }