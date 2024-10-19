/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrios <dbarrios@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:04:43 by dbarrios          #+#    #+#             */
/*   Updated: 2024/10/13 10:27:34 by dbarrios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rs;

	rs = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!rs)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		rs[i] = (*f)(i, s[i]);
		i++;
	}
	rs[i] = 0;
	return (rs);
}
