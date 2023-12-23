/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 05:24:34 by ayaperce          #+#    #+#             */
/*   Updated: 2023/12/22 23:41:25 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_rev_cpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src == dest)
		return (dest);
	if (n)
	{
		if (dest > src && dest < src + n)
			return (ft_rev_cpy(dest, src, n));
		return (ft_memcpy(dest, src, n));
	}
	return (dest);
}

static void	*ft_rev_cpy(void *dest, const void *src, size_t n)
{
	char	*dest_bytes;
	char	*src_bytes;

	dest_bytes = (char *)dest;
	src_bytes = (char *)src;
	while (n)
	{
		dest_bytes[n - 1] = src_bytes[n - 1];
		n--;
	}
	return (dest);
}
