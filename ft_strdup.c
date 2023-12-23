/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 05:20:33 by ayaperce          #+#    #+#             */
/*   Updated: 2023/12/22 13:15:44 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;
	size_t	size_of_str_nul;

	size_of_str_nul = ft_strlen(s) + 1;
	duplicate = malloc(size_of_str_nul);
	if (duplicate == NULL)
		return (duplicate);
	ft_strlcpy(duplicate, s, size_of_str_nul);
	return (duplicate);
}
