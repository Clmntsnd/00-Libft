/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csenand <csenand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:18:09 by csenand           #+#    #+#             */
/*   Updated: 2022/11/09 12:53:17 by csenand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	if (!dst)
		return (ft_strlen(src));
	if (!src)
		return (0);
	dst_len = ft_strlen(dst);
	if (dstsize < dst_len)
		return (dstsize + ft_strlen(src));
	if ((dstsize > 0) && (dstsize - 1 > dst_len))
	{
		while ((src[i] != '\0') && (dstsize - 1 > dst_len + i))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (dst_len + ft_strlen(src));
}

/*
int main()
{
	char y[] = "Hello"; 	// dst
	char z[] = " there"; 	// src

	printf("%lu\n", ft_strlcat(y, z, 0));


	char s[] = "Hello";
	char t[] = " there";

	//printf("%lu\n", strlcat(s, t, 7));
	
}
*/