/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csenand <csenand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:58:08 by csenand           #+#    #+#             */
/*   Updated: 2022/11/09 12:50:53 by csenand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 	DESCRIPTION
** 	Iterates the list ’lst’ and applies the function ’f’ 
**	on the content of each node.
** 	
**	PARAMETERS
**	lst: The address of a pointer to a node.
**	f: The address of the function used to iterate on the list.
**
**	RETURN VALUE
**	None
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
