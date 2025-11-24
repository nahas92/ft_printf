/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:34:36 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/19 17:58:15 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_hex_rec(unsigned int n, char *hex)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += print_hex_rec(n / 16, hex);
	count += ft_putchar(hex[n % 16]);
	return (count);
}

int	print_hex_lower(va_list args)
{
	unsigned int	n;
	int				count;

	n = va_arg(args, unsigned int);
	count = 0;
	if (n == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	count += print_hex_rec(n, "0123456789abcdef");
	return (count);
}

int	print_hex_upper(va_list args)
{
	unsigned int	n;
	int				count;

	n = va_arg(args, unsigned int);
	count = 0;
	if (n == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	count += print_hex_rec(n, "0123456789ABCDEF");
	return (count);
}
