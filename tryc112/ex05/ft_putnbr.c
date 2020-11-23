/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 12:52:56 by asenouci          #+#    #+#             */
/*   Updated: 2020/07/21 18:39:44 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	sign;

	sign = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		sign = -1;
	}
	if (nb >= 10 || nb <= -10)
		ft_putnbr((nb / 10) * sign);
	ft_putchar((nb % 10) * sign + '0');
}
