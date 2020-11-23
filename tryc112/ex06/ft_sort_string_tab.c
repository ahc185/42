/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 21:35:22 by asenouci          #+#    #+#             */
/*   Updated: 2020/07/20 23:28:35 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*tempo;

	j = 0;
	i = 0;
	while (tab[i + 1] != '\0')
	{
		j = i + 1;
		while (tab[j] != '\0')
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tempo = tab[j];
				tab[j] = tab[i];
				tab[i] = tempo;
			}
			j++;
		}
		i++;
	}
}
