/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrios <dbarrios@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 09:50:11 by dbarrios          #+#    #+#             */
/*   Updated: 2024/10/12 12:11:58 by dbarrios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*str_ptr;

	str_ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		str_ptr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
