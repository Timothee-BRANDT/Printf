/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:11:09 by tbrandt           #+#    #+#             */
/*   Updated: 2021/11/18 14:54:27 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_putchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
		(*count)++;
	}
	write(1, str, i);
}

void	ft_putnbr(int nb, int *count)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147482648", count);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48, count);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, count);
		ft_putchar(nb % 10 + 48, count);
	}
}

void	ft_putnbr_hex(unsigned long nb, int *count)
{
	const char *hex = "0123456789abcdef";

	if (nb >= 16)
	{
		ft_putnbr_hex((nb / 16), count);
		ft_putchar(hex[nb % 16], count);
	}
	if (nb < 16)
	{
		ft_putchar(hex[nb % 16], count);
	}
}
