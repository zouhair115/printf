/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarbia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:54:14 by anarbia           #+#    #+#             */
/*   Updated: 2026/11/02 17:18:41 by anarbia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_nbr_base(unsigned long n, char *base, unsigned long len)
{
	int	count;

	count = 0;
	if (n >= len)
		count += print_nbr_base(n / len, base, len);
	count += print_char(base[n % len]);
	return (count);
}
