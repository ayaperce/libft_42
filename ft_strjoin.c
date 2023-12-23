/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 05:17:26 by ayaperce          #+#    #+#             */
/*   Updated: 2023/12/22 05:17:32 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	int		total;
	char	*mlcs;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	total = b + a + 1;
	mlcs = malloc(sizeof(char) * total);
	if (!mlcs)
		return (0);
	ft_memmove(mlcs, s1, a);
	ft_memmove(mlcs + a, s2, b);
	mlcs[total - 1] = '\0';
	return (mlcs);
}
