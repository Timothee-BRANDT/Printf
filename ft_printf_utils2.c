/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:14:44 by tbrandt           #+#    #+#             */
/*   Updated: 2021/11/18 15:03:46 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *ptr, int *count)
{
	ft_putstr("0x", count);
	ft_putnbr_hex((long)ptr, count);
}

void	ft_putnbr_unsigned(unsigned long nb, int *count)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, count);
	if (nb >= 10)
	{
		ft_putnbr_unsigned(nb / 10, count);
		ft_putchar(nb % 10 + 48, count);
	}
}	

void	handle_params(const char *str, int *count, int i, va_list argptr)
{
	i++;
	if (str[i] == 'c')
		ft_putchar(va_arg(argptr, int), count);
	else if (str[i] == 's')
		ft_putstr(va_arg(argptr, char *), count);
	else if (str[i] == 'p')
		ft_putptr(va_arg(argptr, void *), count);
	else if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(argptr, int), count);
	else if (str[i] == 'u')
		ft_putnbr_unsigned(va_arg(argptr, unsigned long), count);
	else if (str[i] == 'x')
		ft_putnbr_hex(va_arg(argptr, unsigned long), count);
}
