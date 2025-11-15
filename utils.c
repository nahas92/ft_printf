/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:16:46 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/15 21:38:30 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return (ft_putchar(c));
}

int	print_str(va_list args)
{
	char *str;
	int count;
	int i;

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

int print_pointer_rec(unsigned long addr, char *hex)
{
    int count = 0;
    if (addr >= 16)
        count += print_pointer_rec(addr / 16, hex);
    count += ft_putchar(hex[addr % 16]);
    return count;
}

int	print_pointer(va_list args)
{
    char *p;
	int count;
	char *hex;
    
	hex = "0123456789abcdef";
    p = va_arg(args, void *);
	count = 0;

	unsigned long addr = (unsigned long)p;

	count += ft_putchar('0');
	count += ft_putchar('x');
	if(addr == 0)
	{
		count += ft_putchar('0');
		return count;
	}
	if (addr >= 16)
		count += print_pointer_rec(addr / 16, hex);

	count += ft_putchar(hex[addr % 16]);
	
	return count;   
}
