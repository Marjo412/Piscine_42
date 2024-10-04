/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:17:58 by mrosset           #+#    #+#             */
/*   Updated: 2024/08/26 17:45:59 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*

#include <stdio.h>
int	main(void)
{
	char	source[] = "Hello";
	char	destination[] = "World1";
	unsigned int	n;

	n = 2;

	ft_strncpy(destination, source, n);

	printf("mot copie %s\n", destination);
	return (0);
}*/
