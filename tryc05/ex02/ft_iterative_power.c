/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 19:13:42 by asenouci          #+#    #+#             */
/*   Updated: 2020/07/06 19:56:28 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int n;

	n = nb;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		n = n * nb;
		power--;
	}
	return (n);
}
