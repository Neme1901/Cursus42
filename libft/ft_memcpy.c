/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrios <dbarrios@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:02:41 by dbarrios          #+#    #+#             */
/*   Updated: 2024/10/06 15:33:42 by dbarrios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpd;
	unsigned char	*tmps;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	tmpd = (unsigned char *)dst;
	tmps = (unsigned char *)src;
	while (n > 0)
	{
		*(tmpd++) = *(tmps++);
		n--;
	}
	return (dst);
}
