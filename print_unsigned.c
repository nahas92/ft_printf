/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:35:13 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/19 17:35:14 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_unsigned_rec(unsigned long n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_unsigned_rec(n / 10);
	count += ft_putchar((n % 10) + '0');
	return (count);
}

int	print_unsigned(va_list args)
{
	unsigned int	n;
	int				count;

	count = 0;
	n = va_arg(args, unsigned int);
	if (n == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	count += print_unsigned_rec(n);
	return (count);
}
