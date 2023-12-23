/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:03:08 by ayaperce          #+#    #+#             */
/*   Updated: 2023/12/23 16:57:17 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_length;

	if (len == 0 && (!haystack || !needle))
		return (NULL);
	needle_length = ft_strlen(needle);
	if (!needle_length)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i + needle_length <= len)
	{
		if (!ft_strncmp((char *)(haystack + i), needle, needle_length))
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
