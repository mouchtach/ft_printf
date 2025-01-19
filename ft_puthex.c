/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouchta <ymouchta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:03:20 by ymouchta          #+#    #+#             */
/*   Updated: 2024/12/03 10:24:05 by ymouchta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long nb, char c, int *count)
{
	char	*hex;
	char	*up;

	hex = "0123456789abcdef";
	up = "0123456789ABCDEF";
	if (nb > 15 && c != 'u')
		ft_puthex((nb / 16), c, count);
	if (nb > 9 && c == 'u')
		ft_puthex((nb / 10), c, count);
	if (c == 'u')
		ft_putchar(((nb % 10) + 48), count);
	if (c == 'x' || c == 'p')
		ft_putchar(hex[nb % 16], count);
	if (c == 'X')
		ft_putchar(up[nb % 16], count);
}
