/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrios <dbarrios@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:47:19 by dbarrios          #+#    #+#             */
/*   Updated: 2024/10/13 10:22:50 by dbarrios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src_ptr;
	unsigned char	*dest_ptr;

	if (!dest && !src)
		return (NULL);
	src_ptr = (unsigned char *)src;
	dest_ptr = (unsigned char *)dest;
	if (dest_ptr > src_ptr)
	{
		while (n--)
			dest_ptr[n] = src_ptr[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dest);
}
