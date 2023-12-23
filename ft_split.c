/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayaperce <ayaperce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 05:24:08 by ayaperce          #+#    #+#             */
/*   Updated: 2023/12/22 05:24:10 by ayaperce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	free_letter_array(char **letter)
{
	size_t	i;

	i = 0;
	if (!letter)
		return ;
	while (letter[i])
	{
		free(letter[i]);
		i++;
	}
	free(letter);
}

size_t	ft_countsletter(const char *s, char c)
{
	size_t	letter;

	letter = 0;
	while (*s)
	{
		if (*s != c)
		{
			++letter;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (letter);
}

static char	*get_next_word(const char **s, char c)
{
	size_t	len;

	len = 0;
	while (**s && **s != c)
	{
		++len;
		++(*s);
	}
	return (ft_substr(*s - len, 0, len));
}

char	**ft_split(const char *s, char c)
{
	char	**letter;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	letter = malloc(sizeof(char *) * (ft_countsletter(s, c) + 1));
	if (!letter)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			letter[i++] = get_next_word(&s, c);
			if (!letter[i - 1])
			{
				free_letter_array(letter);
				return (NULL);
			}
		}
		else
			++s;
	}
	letter[i] = NULL;
	return (letter);
}
