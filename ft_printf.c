/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epellone <epellone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:08:57 by epellone          #+#    #+#             */
/*   Updated: 2023/02/20 12:14:11 by epellone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(char s, va_list *args, int *len)
{
	if (s == 'c')
		ft_printchar(va_arg(*args, int), len);
	else if (s == 's')
		ft_printstr(va_arg(*args, char *), len);
	else if (s == 'd' || s == 'i')
		ft_printnum(va_arg(*args, int), len);
	else if (s == 'u')
		ft_printuns(va_arg(*args, unsigned int), len);
	else if (s == 'X' || s == 'x')
		ft_printhex(va_arg(*args, unsigned int), len, s);
	else if (s == 'p')
	{
		write(1, "0x", 2);
		*len += 2;
		ft_printpoint(va_arg(*args, uintptr_t), len);
	}
	else if (s == '%')
		ft_printchar('%', len);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			ft_check(string[i++], &args, &len);
		}
		else
			ft_printchar((char)string[i++], &len);
	}	
	va_end(args);
	return (len);
}
