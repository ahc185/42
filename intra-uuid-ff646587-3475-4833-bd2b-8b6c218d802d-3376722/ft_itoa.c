/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:32:07 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 16:15:58 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int		ft_length(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	else if (n == 0)
		i = 1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	char	*ft_strdup(char *src)
{
	int			i;
	int			j;
	int			count;
	char		*copy;

	i = 0;
	j = 0;
	count = 0;
	while (src[i] != '\0')
	{
		i++;
		count++;
	}
	if (!(copy = (char*)malloc(count * sizeof(char))))
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		copy[j] = src[i];
		i++;
		j++;
	}
	copy[j] = '\0';
	return (copy);
}

char			*ft_itoa(int n)
{
	int		j;
	char	*s;

	j = ft_length(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(s = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	s[j--] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		s[j--] = '0' + (n % 10);
		n /= 10;
	}
	return (s);
}
