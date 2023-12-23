/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 05:22:20 by ayaperce          #+#    #+#             */
/*   Updated: 2023/12/22 13:12:58 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = malloc(1 * sizeof(char));
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	if (len > s_len)
		len = s_len;
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc(1 + len * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
