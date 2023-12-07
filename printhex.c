/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:58:43 by mochenna          #+#    #+#             */
/*   Updated: 2023/12/06 15:00:04 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	gethex(unsigned long n, char *b)
{
	int	cmp;

	cmp = 0;
	if (n < 16)
		cmp += ft_putchar(b[n]);
	else
	{
		cmp = gethex(n / 16, b);
		cmp += gethex(n % 16, b);
	}
	return (cmp);
}

int	printhex(long n, int f)
{
	int		c;
	char	*u;
	char	*l;

	c = 0;
	l = "0123456789abcdef";
	u = "0123456789ABCDEF";
	if (f == 1)
	{
		c = gethex(n, l);
	}
	else
	{
		c = gethex(n, u);
	}
	return (c);
}

int	printaddress(void *p)
{
	print_str("0x");
	return (printhex((unsigned long)p, 1) + 2);
}
