/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:07:20 by mrosset           #+#    #+#             */
/*   Updated: 2024/08/22 17:21:15 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)

{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include<stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 44;

	ft_swap(&a, &b);

	printf("%d, %d", a, b);
	return (0);
}*/
