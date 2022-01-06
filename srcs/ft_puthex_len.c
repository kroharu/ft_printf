/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladrian <ladrian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:32:20 by ladrian           #+#    #+#             */
/*   Updated: 2021/12/07 21:13:43 by ladrian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_conv_inthex_put_len(unsigned long int n, int *len, char up_low_case)
{
	if (n / 16)
		ft_conv_inthex_put_len(n / 16, len, up_low_case);
	n %= 16;
	if (n > 9)
		ft_putchar_len(n % 10 + up_low_case);
	else
		ft_putchar_len(n % 10 + '0');
	*len = *len + 1;
}

int	ft_puthex_len(unsigned int n, char up_low_case)
{
	int	hex_len;

	hex_len = 0;
	if (up_low_case == 'X')
		up_low_case = 'A';
	else
		up_low_case = 'a';
	ft_conv_inthex_put_len(n, &hex_len, up_low_case);
	return (hex_len);
}
