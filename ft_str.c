#include "libft.h"

int ft_char(int c);

int	ft_str(char *str)
{
	size_t	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (i < ft_strlen(str))
	{
		ft_char(str[i]);
		i++;
	}
	return (ft_strlen(str));
}