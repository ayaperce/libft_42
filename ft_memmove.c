/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 05:24:34 by ayaperce          #+#    #+#             */
/*   Updated: 2023/12/24 03:51:22 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*dst_char;
	const char	*src_char = (const char *)src;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_char = (char *)dst;
	if (src_char < dst_char)
	{
		while (n--)
			*(dst_char + n) = *(src_char + n);
	}
	else
	{
		while (n--)
			*dst_char++ = *src_char++;
	}
	return (dst);
}
