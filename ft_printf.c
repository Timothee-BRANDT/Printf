/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:40:05 by tbrandt           #+#    #+#             */
/*   Updated: 2021/11/18 14:42:39 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		count;
	int		i;

	va_start(argptr, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			check_params(str, &count, i, argptr);
		}
		else 
			ft_putchar(str[i], &count);
		i++;
	}
	va_end(argptr);
	return (count);
}
