#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int count;
	unsigned long lol = 10;
	count = ft_printf("%x\n", lol);	
	ft_printf("%d", count);
}
