/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khmohda <khmohda@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:50:33 by khmohda           #+#    #+#             */
/*   Updated: 2026/10/26 15:03:00 by khmohda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	nb_ln(unsigned int nb)
{
	int	count;

	count = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

static void	fill_arr(char *str, unsigned int nb, int len, int neg)
{
	str[len] = '\0';
	if (neg)
		str[0] = '-';
	else if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		len--;
		str[len] = nb % 10 + '0';
		nb = nb / 10;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	int				neg;
	int				len;
	char			*str;

	neg = 0;
	len = 0;
	if (n < 0)
		nb = -(unsigned int)(n);
	else
		nb = (unsigned int)(n);
	len += nb_ln(nb);
	if (n < 0)
	{
		len++;
		neg += 1;
	}
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	fill_arr(str, nb, len, neg);
	return (str);
}
