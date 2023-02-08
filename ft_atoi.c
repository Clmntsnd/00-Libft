/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csenand <csenand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:20:50 by csenand           #+#    #+#             */
/*   Updated: 2022/11/09 12:49:55 by csenand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	convert;

	i = 0;
	signe = 1;
	convert = 0;
	if (!str)
		return (0);
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		convert = convert * 10 + (str[i] - 48);
		i++;
	}
	return (signe * convert);
}

/*
int	main(void)
{
	char	z[10];
	char	x[] = "---+--+1234ab567";
	char	y[] = "1234ab567";
	char	w[] = "\n\t -1--+--+1234ab567";

	printf("ft_atoi\n");
	printf("%d\n", ft_atoi(z));
	printf("%d\n", ft_atoi(x));
	printf("%d\n", ft_atoi(y));
	printf("%d\n", ft_atoi(w));
	printf("\n");
	printf("atoi\n");
	printf("%d\n", atoi(z));
	printf("%d\n", atoi(x));
	printf("%d\n", atoi(y));
	printf("%d\n", atoi(w));
}
*/