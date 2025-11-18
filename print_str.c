#include "ft_printf.h"

int	print_str(va_list args)
{
	char	*str;
	int		count;
	int		i;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	i = 0;
	count = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		count++;
		i++;
	}
	return (count);
}
