/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epellone <epellone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:09:17 by epellone          #+#    #+#             */
/*   Updated: 2023/02/20 11:47:22 by epellone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_printstr(char *s, int *len)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	while (s[i])
	{
		ft_printchar(s[i++], len);
	}
}
