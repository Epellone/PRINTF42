/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epellone <epellone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:08:51 by epellone          #+#    #+#             */
/*   Updated: 2023/02/20 11:49:44 by epellone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnum(int num, int *len)
{
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (num < 0)
	{
		ft_printchar('-', len);
		ft_printnum(num * -1, len);
	}
	else
	{
		if (num >= 10)
			ft_printnum(num / 10, len);
		ft_printchar(num % 10 + 48, len);
	}
}

void	ft_printuns(unsigned int u, int *len)
{
	if (u >= 10)
		ft_printuns(u / 10, len);
	ft_printchar(u % 10 + 48, len);
}
