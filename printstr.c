/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 11:57:19 by mochenna          #+#    #+#             */
/*   Updated: 2023/12/06 15:59:21 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str(const char *s)
{
	int	i;
	int	c;

	if (s == NULL)
		return (print_str("(null)"));
	i = 0;
	while (s[i])
		ft_putchar(s[i++]);
	return (i);
}
