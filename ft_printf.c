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

int ft_printf(const char *format, ...)
{
    va_list args;
    int i = 0;
    int count = 0;

    va_start(args, format);

    while(format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;

            if(format[i] == 'c')
                count += print_char(args);

            else if (format[i] == 's')
                count += print_str(args);    

            else if (format[i] == '%')
                count += ft_putchar('%');    
            
        }
        else
        {
            count += ft_putchar(format[i]);
            i++;
        }
    }
}
