/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarbia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 18:59:52 by anarbia           #+#    #+#             */
/*   Updated: 2026/11/02 17:22:59 by anarbia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *fmt, ...);
int	print_ptr(void *ptr);
int	print_str(char *str);
int	print_char(char c);
int	print_int(int n);
int	print_nbr_base(unsigned long n, char *base, unsigned long len);

#endif
