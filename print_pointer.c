/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 17:34:57 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/19 18:42:02 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	unsigned long	addr;

	p = va_arg(args, void *);
	count = 0;
	addr = (unsigned long)p;
	if (addr == 0)
	{
		count += write(1, "0x0", 3);
		return (count);
	}
	count += ft_putchar('0');
	count += ft_putchar('x');
	count += print_pointer_rec(addr, "0123456789abcdef");
	return (count);
}
