/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <edu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:04:15 by ecortes-          #+#    #+#             */
/*   Updated: 2023/09/29 11:16:54 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long pt)
{
	char	*dicc;
	int		i;
	int		b;

	i = 0;
	dicc = "0123456789abcdef";
	if (pt >= 16)
		i += ft_ptr(pt / 16);
	b = write(1, dicc + (pt % 16), 1);
	if (b == -1)
		return (-1);
	i += b;
	return (i);
}
