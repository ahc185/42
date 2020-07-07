/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 23:50:27 by asenouci          #+#    #+#             */
/*   Updated: 2020/07/07 14:23:42 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (0);
	while (nb / 2 >= i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
