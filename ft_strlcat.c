/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmohda <khmohda@student.1337.ma>         	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 11:36:07 by khmohda           #+#    #+#             */
/*   Updated: 2026/10/15 11:36:16 by khmohda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srcln;
	size_t	dstln;

	srcln = 0;
	dstln = 0;
	i = 0;
	while (dstln < size && dst[dstln])
		dstln++;
	while (src[srcln])
		srcln++;
	if (dstln == size)
		return (size + srcln);
	while (i < (size - dstln - 1) && src[i])
	{
		dst[dstln + i] = src[i];
		i++;
	}
	dst[i + dstln] = '\0';
	return (srcln + dstln);
}
