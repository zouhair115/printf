/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarbia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:55:25 by anarbia           #+#    #+#             */
/*   Updated: 2026/11/02 17:20:58 by anarbia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_ptr(void *ptr)
{
	if (!ptr)
		return (print_str("(nil)"));
	return (print_str("0x") + print_nbr_base((unsigned long)ptr,
			"0123456789abcdef", 16));
}
