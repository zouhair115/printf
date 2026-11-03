/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarbia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 19:18:02 by anarbia           #+#    #+#             */
/*   Updated: 2026/11/03 12:48:31 by anarbia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	dispatch(char c, va_list args)
{
	if (c == 'c')
		return (print_char(va_arg(args, int)));
	if (c == 's')
		return (print_str(va_arg(args, char *)));
	if (c == 'p')
		return (print_ptr(va_arg(args, void *)));
	if (c == 'd' || c == 'i')
		return (print_int(va_arg(args, int)));
	if (c == 'u')
		return (print_nbr_base(va_arg(args, unsigned int),
				"0123456789", 10));
	if (c == 'x')
		return (print_nbr_base(va_arg(args, unsigned int),
				"0123456789abcdef", 16));
	if (c == 'X')
		return (print_nbr_base(va_arg(args, unsigned int),
				"0123456789ABCDEF", 16));
	if (c == '%')
		return (print_char('%'));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	arg;
	int		count;
	int		i;

	if (!fmt)
		return (-1);
	va_start(arg, fmt);
	count = 0;
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i + 1])
			count += dispatch(fmt[++i], arg);
		else
			count += print_char(fmt[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
