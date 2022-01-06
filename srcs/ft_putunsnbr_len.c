/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladrian <ladrian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:32:55 by ladrian           #+#    #+#             */
/*   Updated: 2021/12/07 21:52:25 by ladrian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_put_dec(long int n, int *len)
{
	if (n / 10)
		ft_put_dec(n / 10, len);
	ft_putchar_len(n % 10 + '0');
	(*len)++;
}

int	ft_putunsnbr_len(unsigned int n)
{
	int	digit_len;

	digit_len = 0;
	ft_put_dec(n, &digit_len);
	return (digit_len);
}
