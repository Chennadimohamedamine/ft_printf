/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochenna <mochenna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:11:27 by mochenna          #+#    #+#             */
/*   Updated: 2023/12/06 15:58:44 by mochenna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		putnbr(long n);
int		u_putnbr(long n);
int		print_str(const char *s);
int		printhex(long n, int f);
int		printaddress(void *p);
int		ft_printf(const char *format, ...);

#endif
