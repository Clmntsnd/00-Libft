/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csenand <csenand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:19:30 by csenand           #+#    #+#             */
/*   Updated: 2023/07/05 11:36:13 by csenand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	SYNOPSIS
**	Find length of a list
**
** 	DESCRIPTION
** 	Counts the number of nodes in a list.
** 	
**	PARAMETERS
**	lst: The beginning of the list.
**
**	RETURN VALUE
**	The length of the list
*/

#include "../include/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*ptr_lst;

	if (lst == NULL)
		return (0);
	i = 0;
	ptr_lst = lst;
	while (ptr_lst)
	{
		i++;
		ptr_lst = ptr_lst -> next;
	}
	return (i);
}
