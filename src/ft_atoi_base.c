/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loulou <loulou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:20:50 by csenand           #+#    #+#             */
/*   Updated: 2023/03/14 17:23:33 by loulou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	sign;
	int	res;
	int	num;

	i = 0;
	sign = 1;
	res = 0;
	num = 0;

	if (!str)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9'))
			num = str[i] - 48;
		else if ((str[i] >= 'a' && str[i] <= 'f'))
			num = (str[i] - 'a') + 10;
		else if ((str[i] >= 'A' && str[i] <= 'F'))
			num = (str[i] - 'A') + 10;
		else
			break;
		if (num < str_base)
			res = res * str_base + num;
		else
			break;
		i++;
	}
	return (sign * res);
}

int	main(void)
{
	char	x[] = "42";
	char	y[] = "1CDEF";
	char	w[] = "\n\t -1234ab";

	printf("ft_atoi_base\n");
	printf("%d\n", ft_atoi_base(x, 10));
	printf("%d\n", ft_atoi_base(y, 13));
	printf("%d\n", ft_atoi_base(w, 16));
}
