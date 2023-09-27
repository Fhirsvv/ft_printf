#include "libft.h"

int	ft_print_format(char c, va_list args);

int	ft_printf(char const *format, ...)
{
	int	i;
	va_list	args;
	va_start(args, format);

	i = 0;
	while(*format)
	{
		if (*format == '%')
			i += ft_print_format(*++format, args);
		else
			i += write(1, format, 1);
		++format;
	}
	va_end(args);
	return (i);
}