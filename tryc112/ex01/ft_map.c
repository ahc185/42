/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 01:25:58 by asenouci          #+#    #+#             */
/*   Updated: 2020/07/18 02:12:03 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *t;
	int i;

	i = 0;
	if (length < 1)
		return (0);
	if (!(t = malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		t[i] = f(tab[i]);
		i++;
	}
	return (t);
}
