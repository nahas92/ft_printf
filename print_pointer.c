#include "ft_printf.h"

static int	print_pointer_rec(unsigned long addr, char *hex)
{
	int	count;

	count = 0;
	if (addr >= 16)
		count += print_pointer_rec(addr / 16, hex);
	count += ft_putchar(hex[addr % 16]);
	return (count);
}

int	print_pointer(va_list args)
{
	void			*p;
	int				count;
	char			*hex;
	unsigned long	addr;

	hex = "0123456789abcdef";
	p = va_arg(args, void *);
	count = 0;
	addr = (unsigned long)p;
	if (addr == 0)
	{
		count += write(1, "(nil)", 5);
		return (count);
	}
	count += ft_putchar('0');
	count += ft_putchar('x');
	count += print_pointer_rec(addr, hex);
	return (count);
}
