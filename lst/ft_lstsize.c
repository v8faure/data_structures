/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slonnie <slonnie@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:34:22 by slonnie           #+#    #+#             */
/*   Updated: 2022/04/29 20:46:45 by slonnie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	else
	{
		while (lst != NULL)
		{
			i++;
			lst = lst -> next;
		}
	}
	return (i);
}
