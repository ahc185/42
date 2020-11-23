/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_multi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 03:19:27 by asenouci          #+#    #+#             */
/*   Updated: 2020/07/21 03:49:57 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_multi(char *av, char *bv)
{
	int a;
	int b;
	int res;

	a = ft_atoi(av);
	b = ft_atoi(bv);
	res = a * b;
	ft_putnbr(res);
}
