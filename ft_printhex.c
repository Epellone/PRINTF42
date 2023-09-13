/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epellone <epellone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:41:18 by epellone          #+#    #+#             */
/*   Updated: 2023/02/20 12:03:37 by epellone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex(unsigned int num, int *len, char s)
{
	char	*base;

	if (s == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num >= 16)
		ft_printhex(num / 16, len, s);
	ft_printchar(base[num % 16], len);
}

void	ft_printpoint(uintptr_t num, int *len)
{
	char	*base;

	base = "0123456789abcdef";
	if (num >= 16)
		ft_printpoint(num / 16, len);
	ft_printchar(base[num % 16], len);
}
