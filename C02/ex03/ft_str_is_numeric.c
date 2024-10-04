/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:15:43 by mrosset           #+#    #+#             */
/*   Updated: 2024/09/12 14:15:49 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	char *string;
	string = "1234fr5";
	int	chaine;
	chaine = ft_str_is_numeric(string);

	ft_str_is_numeric(string);

	printf("%d \n", chaine);
	return(0);
}*/
