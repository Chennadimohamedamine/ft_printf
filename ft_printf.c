/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:09:32 by mochenna          #+#    #+#             */
/*   Updated: 2023/12/06 15:58:04 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	p_format(va_list arg, char f, int *l)
{
	if (f == 'c')
		*l += ft_putchar(va_arg(arg, int));
	else if (f == 's')
		*l += print_str(va_arg(arg, char *));
	else if (f == 'i' || f == 'd')
		*l += putnbr(va_arg(arg, int));
	else if (f == 'p')
		*l += printaddress(va_arg(arg, void *));
	else if (f == 'u')
		*l += u_putnbr(va_arg(arg, unsigned int));
	else if (f == 'x')
		*l += printhex(va_arg(arg, unsigned int), 1);
	else if (f == 'X')
		*l += printhex(va_arg(arg, unsigned int), 2);
	else if (f == '%')
		*l += ft_putchar(37);
	else
		*l += ft_putchar(f);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	arg;

	if (write(1, "", 0) < 0)
		return (-1);
	len = 0;
	i = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			p_format(arg, format[i++ +1], &len);
		else
		{
			ft_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
