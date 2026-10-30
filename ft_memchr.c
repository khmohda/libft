/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmohda <khmohda@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 20:12:05 by khmohda           #+#    #+#             */
/*   Updated: 2026/10/15 20:12:08 by khmohda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*st;

	i = 0;
	st = (const unsigned char *)s;
	while (i < n)
	{
		if (st[i] == (unsigned char)c)
			return ((void *)(st + i));
		i++;
	}
	return (NULL);
}
