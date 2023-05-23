/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:50:47 by kumalong          #+#    #+#             */
/*   Updated: 2023/05/22 19:29:06 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(int c)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	return (1);
}

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ft_putstr(char *s)
{
	size_t i;

	i = 0;
	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	while (s[i])
	{
		if (write(1, &s[i], 1) != 1)
			return (-1);
		i++;
	}
	return (i);
}

static int minint(int n)
{
	(void) n;
	if (write(1, "-2147483648", 11) != 11)
		return (-1);
	return (11);
}

int ft_putnbr(int n)
{
	int nbr;

	nbr = 0;
	if (n == -2147483648)
		return (minint (n));
	if ( n < 0 && ++nbr)
	{
		if (write(1, "-", 1) != 1)
			return (-1);
		n = -n;
	}
	if (n >9)
	{
		nbr += ft_putnbr(n / 10);
		if (nbr == -1)
			return (-1);
		n = n % 10;
	}
	return (nbr);
}
