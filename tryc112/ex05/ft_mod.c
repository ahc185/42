/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 03:48:17 by asenouci          #+#    #+#             */
/*   Updated: 2020/07/21 18:40:03 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_mod(char *av, char *bv)
{
	int a;
	int b;
	int res;

	a = ft_atoi(av);
	b = ft_atoi(bv);
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
	{
		res = a % b;
		ft_putnbr(res);
	}
}
