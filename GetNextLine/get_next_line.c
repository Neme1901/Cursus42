/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrios <dbarrios@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:02:01 by dbarrios          #+#    #+#             */
/*   Updated: 2024/10/24 08:44:09 by dbarrios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//(free(*),*NULL);
char	*get_next_line(int fd)
{
	static char	*prev_c;
	char		*line;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	return (NULL);
}

static char	*set_line(char *line_bff)
{
	char	*left_c;
	ssize_t	i;

	i = 0;
}

static char	*fill_line_bff(int fd, char *prev_c, char *buffer)
{
	ssize_t	b_reads;
	char	*tmp;

	b_reads = 1;
	while (b_reads > 0)
	{
		b_reads = read(fd, buffer, BUFFER_SIZE);
		if (b_reads == -1)
			return (free(prev_c), NULL);
		else if (b_reads == 0)
			break ;
		buffer[b_reads] = 0;
		if (!prev_c)
			prev_c = ft_strdup("");
		tmp = prev_c;
		prev_c = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (prev_c);
}

static char	*ft_strchr(char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
