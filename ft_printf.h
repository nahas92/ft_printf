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
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include "./libft/libft.h"

int ft_printf(const char *format, ...);
int print_char(va_list args);
int ft_putchar(char c);

#endif
