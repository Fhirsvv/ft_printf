#include "libft.h"

int ft_char(int c);
int ft_dig(long nb, int base, int n);
int	ft_ptr(void *str);
int	ft_str(char *str);

int	ft_print_format(char c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_char(va_arg(args, int));
	else if (c == 's')
		i += ft_str(va_arg(args, char *));
	else if (c == 'd' ||c == 'i')
		i += ft_dig((long)(va_arg(args, int)), 10, 1);
	else if (c == 'x')
		i += ft_dig((long)(va_arg(args, unsigned int)), 16, 1);
	else if (c == 'X')
		i += ft_dig((long)(va_arg(args, unsigned int)), 16, 2);
	else if (c == 'u')
		i += ft_dig((long)(va_arg(args, unsigned int)), 10, 1);
	else if (c == 'p')
		i += ft_ptr(va_arg(args, void *));
	else if (c == '%')
		i += ft_char(c);
	else
		return (-1);
	return (i);
}