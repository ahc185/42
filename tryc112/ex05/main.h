/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asenouci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 14:46:54 by asenouci          #+#    #+#             */
/*   Updated: 2020/07/21 14:58:52 by asenouci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_check(int ac, char **av);
int		ft_atoi(char *str);
void	ft_plus(char *a, char *b);
void	ft_minus(char *a, char *b);
void	ft_multi(char *a, char *b);
void	ft_div(char *a, char *b);
void	ft_mod(char *a, char *b);
void	ft_putstr(char *str);

#endif
