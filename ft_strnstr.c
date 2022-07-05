#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *s, const char *f, size_t n)
{
    if (*f == 0 || f == s)
        return ((char *)s);
    int lf;

    lf = ft_strlen(f); 
    while(*s && --n)
    {
        if (*s == *f )
        {
            while (*s == *f && --n)
            {
                s++;
                f++;
            }
            if (*f == 0)
                return((char *)s - lf);
            else
                while(*f)
                    f++;
               f -= lf;
        }
        s++;
    }
    return(NULL);
}

// int main()
// {
//     const char *largestring = "MZIRIBMZIRIBMZE123";
//     const char *smallstring = "MZIRIBMZE";
//     char *ptr;

//     ptr = strnstr(largestring, smallstring, ft_strlen(smallstring));
//     printf("BUENA = %s\n", ptr);

//     const char *larges = "MZIRIBMZIRIBMZE123";
//     const char *small = "MZIRIBMZE";
//     char *p;

//     p = ft_strnstr(larges, small, ft_strlen(smallstring));
//     printf("MIA = %s\n", ptr);

//     char *s1 = "oh no not the empty string !";
//         char *s2 = "";
//         size_t max = strlen(s1);
//         char *i1 = strnstr(s1, s2, max);
//         char *i2 = ft_strnstr(s1, s2, max);
//         printf("BUENA = %s\n", i1);
//         printf("MIA = %s\n", i2);
//     return(0);

// }