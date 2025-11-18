#include "ft_printf.h"

int	print_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return (ft_putchar(c));
}
