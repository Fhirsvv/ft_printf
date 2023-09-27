#include "libft.h"

int ft_dig(long nb, int base, int n);

int	ft_ptr(void *str)
{
	long	arr;

	arr = (long)&str;
	write(1, "0x", 2);
	return (ft_dig(arr, 16, 1) + 2);
}