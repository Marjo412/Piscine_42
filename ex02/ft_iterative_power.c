/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:12:16 by mrosset           #+#    #+#             */
/*   Updated: 2024/09/08 10:09:17 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	a;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = 1;
	a = nb;
	while (i < power)
	{
		a = a * nb;
		i++;
	}
	return (a);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(5, 3));
}*/
