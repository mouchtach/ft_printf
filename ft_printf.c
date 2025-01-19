/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouchta <ymouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:47:54 by ymouchta          #+#    #+#             */
/*   Updated: 2024/12/03 10:51:54 by ymouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(va_list list, char c, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(list, int), count);
	else if (c == 's')
		ft_putstr(va_arg(list, char *), count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_puthex(va_arg(list, unsigned long), c, count);
	}
	else if (c == 'x' || c == 'X' || c == 'u')
		ft_puthex((unsigned long)va_arg(list, unsigned int), c, count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(list, int), count);
	else
		ft_putchar(c, count);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			ft_check(list, str[i + 1], &count);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == '\0')
			break ;
		else
			ft_putchar(str[i], &count);
		i++;
	}
	va_end(list);
	return (count);
}
