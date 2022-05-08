/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:39:58 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/29 20:46:24 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return (0);
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
