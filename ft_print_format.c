/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:03:20 by ecortes-          #+#    #+#             */
/*   Updated: 2023/09/28 16:03:21 by ecortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
