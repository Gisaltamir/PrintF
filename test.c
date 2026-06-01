/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gialtami <gialtami@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 15:37:23 by gialtami          #+#    #+#             */
/*   Updated: 2026/06/01 16:48:49 by gialtami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(void)
{
	char	*ptr;

	ft_printf("Aqui un test de caracter: %c", 'A');
	write(1, "\n", 1);
	ft_printf("Aqui un test de string: %s", "Pikachu");
	write(1, "\n", 1);
	ft_printf("Aqui un test de puntero: %p", ptr);
	write(1, "\n", 1);
	ft_printf("Aqui un test de decimal: %d", 23);
	write(1, "\n", 1);
	ft_printf("Aqui un test de entero base 10: %i", -904890);
	write(1, "\n", 1);
	ft_printf("Aqui un test de decimal sin signo: %u", 1234);
	write(1, "\n", 1);
	ft_printf("Aqui un test de hexadecimal: %x", 436);
	write(1, "\n", 1);
	ft_printf("Aqui un test de HEXADECIMAL: %X", 436);
	write(1, "\n", 1);
	ft_printf("Aqui un test de simbolo porcentaje: %%");
}
