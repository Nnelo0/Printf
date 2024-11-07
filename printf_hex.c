/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:09:15 by ebroudic          #+#    #+#             */
/*   Updated: 2024/11/07 11:08:28 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	printf_hex_recursive(unsigned int n, char *hex)
{
	int	count;

	count = 0;
	if (n >= 16)
	{
		count += printf_hex_recursive(n / 16, hex);
		count += printf_char(hex[n % 16]);
	}
	else
		count += printf_char(hex[n % 16]);
	return (count);
}

int	printf_hex(unsigned int n, int base)
{
	char	*hex;

	if (base)
		hex = "0123456789ABCDEFG";
	else
		hex = "0123456789abcdefg";
	if (n == 0)
		return (printf_char('0'));
	else
		return (printf_hex_recursive(n, hex));
}
/* int main()
{
	printf_hex(9223372036854775807, 0);
	return 0;
} */