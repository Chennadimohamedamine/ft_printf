/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:56:50 by mochenna          #+#    #+#             */
/*   Updated: 2023/12/06 15:54:21 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putnbr(long n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		ft_putchar('-');
		c = putnbr(-n) + 1;
	}
	else if (n > 9)
	{
		c = putnbr(n / 10);
		c += putnbr(n % 10);
	}
	else
		c += ft_putchar(n + 48);
	return (c);
}

int	u_putnbr(long n)
{
	return (putnbr((unsigned int)n));
}
