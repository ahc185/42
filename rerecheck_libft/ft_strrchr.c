/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <asenouci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:38:08 by asenouci          #+#    #+#             */
/*   Updated: 2020/11/23 15:34:04 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *string, int searchedchar)
{
	int		i;
	char	*s;

	s = (char *)string;
	i = 0;
	if (s[i] == '\0' && searchedchar == '\0')
		return (&s[i]);
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == searchedchar)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
