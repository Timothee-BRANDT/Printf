#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdio.h> // A RETIRER
#include <stdarg.h>

int		ft_strlen(char *str);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int nb, int *count);	
void	ft_putnbr_hex_lowercase(unsigned long nb, int *count);
void	ft_putnbr_hex_uppercase(unsigned long nb, int *count);
void	ft_putptr(void *ptr, int *count);
void	ft_putnbr_unsigned(unsigned int, int *count);
void	ft_putchar_unsigned(unsigned int, int *count);
void	check_params(const char *str, int *count, int i, va_list argptr);
int		ft_printf(const char *str, ...);

#endif
