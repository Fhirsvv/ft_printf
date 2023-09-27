#include "libft.h"

int ft_char(int c);

int ft_dig(long nb, int base, int n)
{
    int i;
    char *dicc;

    if (n == 1)
        dicc = "0123456789abcdef";
    else
        dicc = "0123456789ABCDEF";
    if (nb < 0)
    {
        write(1, "-", 1);
        return (ft_dig(-nb, base, n) + 1);
    }
    else if(nb < base)
        return (ft_char(dicc[nb]));
    else
    {
        i = ft_dig(nb / base, base, n);
        return (i + ft_dig(nb % base, base, n));
    }
}