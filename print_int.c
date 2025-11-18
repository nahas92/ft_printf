#include "ft_printf.h"

static int	print_int_rec(long n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_int_rec(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}

int	print_int(va_list args)
{
	long	n;
	int		count;

	n = va_arg(args, int);
	count = 0;
	if (n == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	count += print_int_rec(n);
	return (count);
}
