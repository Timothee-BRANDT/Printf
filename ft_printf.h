#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

int		ft_strlen(char *str);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int nb, int *count);	
void	ft_putnbr_hex(unsigned long nb, int *count);
void	ft_putptr(void *ptr, int *count);
void	ft_putnbr_unsigned(unsigned long, int *count);
void	handle_params(const char *str, int *count, int i, va_list argptr);
int		ft_printf(const char *str, ...);

#endif
