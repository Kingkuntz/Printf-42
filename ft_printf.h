/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kumalong <kumalong@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:40:50 by kumalong          #+#    #+#             */
/*   Updated: 2023/05/30 18:41:11 by kumalong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int 	ft_putchar(int c);
int		ft_putnbr(int n);
unsigned int	ft_putnbrbase(unsigned int n, char *base);
int 	ft_putstr(char *s);
int 	ft_strlen(char *s);
unsigned int ft_nosign(unsigned int i);
int		ft_putp(unsigned long long i);
int		ft_baselong(unsigned long long n, char *base);
int 	ft_printf(const char *s, ...);

#endif
