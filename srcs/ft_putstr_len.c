/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladrian <ladrian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:32:47 by ladrian           #+#    #+#             */
/*   Updated: 2021/12/07 20:49:42 by ladrian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr_len(char *s)
{
	int	length;

	if (s == NULL)
	{
		ft_putstr_len("(null)");
		return (6);
	}
	length = 0;
	while (s[length])
		length += ft_putchar_len(s[length]);
	return (length);
}
