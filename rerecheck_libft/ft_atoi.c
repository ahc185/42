/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:30:01 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 15:39:57 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isspace(char str)
{
	if (str == ' ' || str == '\f' || str == '\n' || str == '\r'
			|| str == '\t' || str == '\v')
	{
		return (1);
	}
	return (0);
}

int			ft_atoi(char *str)
{
	int i;
	int sign;
	int minus;
	int res;

	i = 0;
	sign = 1;
	minus = 0;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
