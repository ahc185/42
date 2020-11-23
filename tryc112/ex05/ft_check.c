/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:33:08 by asenouci          #+#    #+#             */
/*   Updated: 2020/07/21 18:39:28 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_check(int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (av[2][0] == '+')
		ft_plus(av[1], av[3]);
	else if (av[2][0] == '-')
		ft_minus(av[1], av[3]);
	else if (av[2][0] == '*')
		ft_multi(av[1], av[3]);
	else if (av[2][0] == '/')
		ft_div(av[1], av[3]);
	else if (av[2][0] == '%')
		ft_mod(av[1], av[3]);
	else
	{
		write(1, "0", 2);
	}
	return (1);
}
