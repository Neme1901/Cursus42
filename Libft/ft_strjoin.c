/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrios <dbarrios@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:08:30 by dbarrios          #+#    #+#             */
/*   Updated: 2024/10/13 10:26:44 by dbarrios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		length;
	int		i;
	int		i_result;

	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = (char *)malloc(length * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	i_result = 0;
	while (s1[i] != 0)
		result[i_result++] = s1[i++];
	i = 0;
	while (s2[i] != 0)
		result[i_result++] = s2[i++];
	result[i_result] = 0;
	return (result);
}
