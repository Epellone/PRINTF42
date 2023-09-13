/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epellone <epellone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:09:02 by epellone          #+#    #+#             */
/*   Updated: 2023/02/20 12:08:12 by epellone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *string, ...);
void	ft_check(char s, va_list *args, int *len);

void	ft_printchar(char c, int *len);
void	ft_printstr(char *s, int *len);

void	ft_printnum(int num, int *len);
void	ft_printuns(unsigned int u, int *len);

void	ft_printhex(unsigned int num, int *len, char s);
void	ft_printpoint(uintptr_t num, int *len);

#endif
