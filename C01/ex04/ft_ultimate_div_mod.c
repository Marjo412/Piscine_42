/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:51:11 by mrosset           #+#    #+#             */
/*   Updated: 2024/08/23 08:38:26 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
}
/*
#include<stdio.h>

int	main(void)
{
	int	a;
	int b;

	a = 10;
	b = 3;

	ft_ultimate_div_mod(&a, &b);

	printf("%d, %d", a, b);
	return (0);	
}*/
