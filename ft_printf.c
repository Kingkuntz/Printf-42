/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:04:13 by kumalong          #+#    #+#             */
/*   Updated: 2023/05/23 17:26:55 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_args(const char *s, va_list ac)
{
	if (*(s + 1) == '%')
		return (write (1, (const void *) (s + 1), 1));
	else if (*(s + 1) == 'c')
		return (ft_putchsr(va_arg(ac, int)));
	else if (*(s + 1) == 's')
		return (ft_putstr(va_arg(ac, char *)));
	else if (*(s + 1) == 'i' || (*(s + 1) == 'd'))
		return (ft_putnbr(va_arg(ac, int)));
	else if (*(s + 1 ) == 'x')
		return (ft_putnbrbase(va_arg(ac, unsigned int), ("0123456789abcdef")));
	else if (*(s + 1) == 'X')
		return (ft_putnbrbase(va_arg(ac, unsigned int), ("0123456789ABCDEF")));
	else if (*(s + 1 == 'u')
			return (ft_nosign(va_arg(ac, unsigned int)));
	else if (*(s + 1) == 'p')
			return (ft_putp(va_arg(ac, unsigned long long)));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int	c;
	va_list ac;

	c = 0;
	va_start(ac, s);
	while (*s != '\0')

