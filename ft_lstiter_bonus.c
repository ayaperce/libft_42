/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:14:25 by ayaperce          #+#    #+#             */
/*   Updated: 2023/12/26 21:23:39 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft__lstiter(t_list *lst, void (*f)(void *))
{
    while (lst && f)
	{
		f(lst->content);
		lst = lst->next;
	}
}