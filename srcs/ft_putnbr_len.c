/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladrian <ladrian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:32:28 by ladrian           #+#    #+#             */
/*   Updated: 2021/12/07 20:49:43 by ladrian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_len(int n)
{
	int			digit_len;
	long int	long_n;

	long_n = (long int)n;
	digit_len = 0;
	if (long_n < 0)
	{
		digit_len += ft_putchar_len('-');
		long_n = -long_n;
	}
	ft_put_dec(long_n, &digit_len);
	return (digit_len);
}
