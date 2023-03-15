/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loulou <loulou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:36:11 by csenand           #+#    #+#             */
/*   Updated: 2023/03/14 17:23:33 by loulou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 	DESCRIPTION
** 	Returns the last node of the list.
** 	
**	PARAMETERS
**	lst: The beginning of the list.
**
**	RETURN VALUE
**	Last node of the list
*/

#include "../include/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr_lst;

	if (!lst)
		return (0);
	ptr_lst = lst;
	while (ptr_lst && ptr_lst ->next != NULL)
		ptr_lst = ptr_lst -> next;
	return (ptr_lst);
}
