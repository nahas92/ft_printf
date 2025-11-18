/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:16:34 by aalnahas          #+#    #+#             */
/*   Updated: 2025/11/15 19:24:40 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	print_char(va_list args);
int	print_str(va_list args);
int	print_pointer(va_list args);
int	print_int(va_list args);
int	print_unsigned(va_list args);
int	print_hex_lower(va_list args);
int	print_hex_upper(va_list args);

#endif
