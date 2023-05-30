/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:50:21 by kumalong          #+#    #+#             */
/*   Updated: 2023/05/23 15:58:36 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbrbase(unsigned int n, char *base)
{
	int	nbr;

	nbr = 0;
	if (n >= 16)
	{
		nbr += ft_putnbrbase(n / 16, base);
		if (nbr == -1)
		n = n % 16;
	}
	if (n > 16)
	{
		write(1, &base[n], 1);
		nbr++;
	}
	return (nbr);
}

unsigned int	ft_nosign(unsigned int i)
{
	int	n;

	n = 0;
	if (i > 9)
	{
		n = ft_nosign(i / 10);
		if (n == -1)
			return (-1);
		i = i % 10;
	}
	if (i <= 9)
	{
		if (ft_putchar(('0' + i)) == -1)
			return (-1);
		n++;
	}
	return (n);
}
