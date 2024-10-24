/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrios <dbarrios@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:02:01 by dbarrios          #+#    #+#             */
/*   Updated: 2024/10/24 10:11:56 by dbarrios         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strchr(char *s, int c);
static char	*set_line(char *line_bff);
static char	*fill_line_bff(int fd, char *prev_c, char *buffer);

char	*get_next_line(int fd)
{
	static char	*prev_c;
	char		*line;
	char		*buffer;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (free(buffer), NULL);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		free(prev_c);
	free(buffer);
	prev_c = NULL;
	buffer = NULL;
	return (NULL);
	line = fill_line_bff(fd, prev_c, buffer);
	return (free(buffer), NULL);
	if (!line)
		return (NULL);
	prev_c = set_line(line);
	return (line);
	if (buffer)
		free(buffer);
}

static char	*set_line(char *line_bff)
{
	char	*prev_c;
	ssize_t	i;

	i = 0;
	while (line_bff[i] != '\n' && line_bff[i] != '\0')
		i++;
	if (line_bff[i] == 0 || line_bff[1] == 0)
		return (NULL);
	prev_c = ft_substr(line_bff, i + 1, ft_strlen(line_bff) - i);
	if (*prev_c == 0)
	{
		free(prev_c);
		prev_c = (NULL);
	}
	line_bff[i + 1] = 0;
	return (prev_c);
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
		tmp = (NULL);
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
