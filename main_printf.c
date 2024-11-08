/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:49:20 by ebroudic          #+#    #+#             */
/*   Updated: 2024/11/08 09:17:49 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main()
{
	void	*a = "Hello";
	int		i = 0;

	printf("------test de toutes les fonctions---------\n\n");

	ft_printf("------test de %%c avec ma fonction-------\n%c\n", 'a');
	printf("------test de %%c avec la fonction printf-----\n%c\n\n", 'a');
	
	ft_printf("------test de %%s avec ma fonction-------\n%s\n", "Hello World !");
	printf("------test de %%s avec la fonction printf-----\n%s\n\n", "Hello World !");

	ft_printf("------test de %%p avec ma fonction-------\n%p\n", a);
	printf("------test de %%p avec la fonction printf-----\n%p\n\n", a);

	ft_printf("------test de %%d avec ma fonction-------\n%d\n", 42);
	printf("------test de %%d avec la fonction printf-----\n%d\n\n", 42);

	ft_printf("------test de %%i avec ma fonction-------\n%i\n", 42);
	printf("------test de %%i avec la fonction printf-----\n%i\n\n", 42);

	ft_printf("------test de %%u avec ma fonction-------\n%u\n", 42);
	printf("------test de %%u avec la fonction printf-----\n%u\n\n", 42);

	ft_printf("------test de %%x avec ma fonction-------\n%x\n", 42);
	printf("------test de %%x avec la fonction printf-----\n%x\n\n", 42);

	ft_printf("------test de %%X avec ma fonction-------\n%X\n", 42);
	printf("------test de %%X avec la fonction printf-----\n%X\n\n", 42);

	ft_printf("------test de %% avec ma fonction-------\n%%\n");
	printf("------test de %% avec la fonction printf-----\n%%\n\n");


	i = ft_printf("------test de ce que retourne la fonction-----\n%c\n", 'a');
	ft_printf("-------ce que retourne ma fonction------ \n [%d]\n", i);
	i = printf("------test de ce que retourne la fonction-----\n%c\n", 'a');
	printf("-------ce que retourne la fonction prinft------ \n [%d]\n", i);
}
