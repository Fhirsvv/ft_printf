/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dig.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecortes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:03:01 by ecortes-          #+#    #+#             */
/*   Updated: 2023/09/28 16:03:03 by ecortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
