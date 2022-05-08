/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:35:49 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/29 20:46:33 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	if (lst)
	{
		while (lst -> next)
			lst = lst -> next;
	}
	return (lst);
}
