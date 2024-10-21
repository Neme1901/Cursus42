/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrios <dbarrios@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:42:43 by dbarrios          #+#    #+#             */
/*   Updated: 2024/10/21 12:13:20 by dbarrios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long nb);
static char	*prev_con(int len);

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*rs;
	long	nb;

	nb = n;
	len = int_len(nb);
	rs = prev_con(len);
	if (!rs)
		return (NULL);
	if (nb < 0)
		nb = -nb;
	i = len - 1;
	while (nb != 0)
	{
		rs[i] = ((nb % 10) + 48);
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		rs[0] = '-';
	rs[len] = 0;
	return (rs);
}

static char	*prev_con(int len)
{
	char	*tp;

	tp = malloc((len + 1) * sizeof(char));
	if (!tp)
		return (NULL);
	tp[0] = '0';
	return (tp);
}

static int	int_len(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	if (nb == 0)
		i++;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}
