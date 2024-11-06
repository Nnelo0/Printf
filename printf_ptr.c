/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:18:27 by ebroudic          #+#    #+#             */
/*   Updated: 2024/11/06 12:32:42 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_ptr(unsigned long long n)
{
	int	count;

	if (n == 0)
		return (write(1, "(nil)", 5));
	count = write(1, "0x", 2);
	count += printf_hex(n, 0);
	return (count);
}