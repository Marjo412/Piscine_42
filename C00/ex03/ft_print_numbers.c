/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:23:31 by mrosset           #+#    #+#             */
/*   Updated: 2024/08/21 17:42:29 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	numbers;

	numbers = '0';
	while (numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return 0;
}
*/
