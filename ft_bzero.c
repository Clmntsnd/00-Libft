/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csenand <csenand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:14:15 by csenand           #+#    #+#             */
/*   Updated: 2022/11/09 12:50:08 by csenand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
				** VERSION LONGUE **
				
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ucs;

	ucs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ucs[i] = 0;
		i++;
	}
	s = ucs;
}
*/

/*
int main()
{
	char str[30] = "ABCD EFGH";  
	 
	printf("Before bzero => %s",str);  
	 
	ft_bzero(str, 3);  
	 
	printf("\nAfter bzero => %s\n",str);  
	 
	return 0;
}
*/