/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosset <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:42:07 by mrosset           #+#    #+#             */
/*   Updated: 2024/09/12 18:25:21 by mrosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9'))
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
			i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%cdj*dc$sdc";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
}*/
