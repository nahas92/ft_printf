/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:16:42 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/15 19:43:27 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char c, va_list args)
{
	if (c == 'c')
		return (print_char(args));
	else if (c == 's')
		return (print_str(args));
	else if (c == 'p')
		return (print_pointer(args));
	else if (c == 'd' || c == 'i')
		return (print_int(args));
	else if (c == 'u')
		return (print_unsigned(args));
	else if (c == 'x')
		return (print_hex_lower(args));
	else if (c == 'X')
		return (print_hex_upper(args));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += handle_format(format[i], args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
