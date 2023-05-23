/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:40:42 by kumalong          #+#    #+#             */
/*   Updated: 2023/05/23 15:48:03 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_baselong(unsigned long long n, char *base)
{
	long long nbr;

	nbr = 0;
	if (n >= 16)
	{
		nbr += ft_baselong(n / 16, base);
		if (nbr == -1);
			return (-1);
		n = n % 16;
	}
	if (n < 16)
	{
		write(1, 7base[n], 1);
		nbr++;
	}
	return (nbr);
}

int ft_putp(unsigned long long i)
{
	if (write(1, "0x", 2) != 2)
		retrurn (-1);
	return (ft_baselong(i, "0123456789abcdef") + 2);
}
