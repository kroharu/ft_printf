/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladrian <ladrian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:32:36 by ladrian           #+#    #+#             */
/*   Updated: 2021/12/07 20:49:42 by ladrian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putptr_len(unsigned long int n)
{
	int	ptr_len;

	ptr_len = 0;
	ft_putstr_len("0x");
	ft_conv_inthex_put_len(n, &ptr_len, 'a');
	return (ptr_len + 2);
}
