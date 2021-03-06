/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladrian <ladrian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:33:11 by ladrian           #+#    #+#             */
/*   Updated: 2021/12/07 21:50:58 by ladrian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int		ft_printf(const char *fmt, ...);
int		ft_parser(const char *format, va_list ap);
int		ft_def_arg_format(char arg_format, va_list argp);
int		ft_putchar_len(char c);
int		ft_putstr_len(char *s);
int		ft_putptr_len(unsigned long int n);
int		ft_putnbr_len(int n);
int		ft_putunsnbr_len(unsigned int n);
int		ft_puthex_len(unsigned int n, char up_low_case);

void	ft_conv_inthex_put_len(unsigned long int n, int *len, char up_low_case);
void	ft_put_dec(long int long_n, int *digit_len);

#endif