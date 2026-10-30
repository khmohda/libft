/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmohda <khmohda@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:48:13 by khmohda           #+#    #+#             */
/*   Updated: 2026/10/17 14:48:16 by khmohda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	ln1;
	size_t	ln2;

	if (!s1 || !s2)
		return (NULL);
	ln1 = ft_strlen(s1);
	ln2 = ft_strlen(s2);
	result = malloc(ln1 + ln2 + 1);
	if (!result)
		return (NULL);
	ft_memcpy(result, s1, ln1);
	ft_memcpy(result + ln1, s2, ln2);
	result[ln1 + ln2] = '\0';
	return (result);
}
