/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:02:19 by mrosset           #+#    #+#             */
/*   Updated: 2024/08/28 11:23:52 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char	*string;
	string = "abcd";
	int chaine = ft_str_is_lowercase(string);

	ft_str_is_lowercase(string);

	printf("%d \n", chaine);
	return(0);
}*/
