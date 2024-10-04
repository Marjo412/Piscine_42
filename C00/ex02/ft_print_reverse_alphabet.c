/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:37:02 by mrosset           #+#    #+#             */
/*   Updated: 2024/08/21 10:46:54 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter != 'a' -1)
	{
		write (1, &letter, 1);
		letter--;
	}
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
