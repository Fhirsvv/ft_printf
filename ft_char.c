#include "libft.h"

int ft_char(int c)
{
    return (write(1, &c, 1));
}