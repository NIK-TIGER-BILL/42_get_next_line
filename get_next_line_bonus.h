/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebalsami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 22:43:05 by ebalsami          #+#    #+#             */
/*   Updated: 2021/06/01 22:43:06 by ebalsami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				fd;
	char			*memory;
	struct s_list	*next;
}					t_list;

int		get_next_line(int fd, char **line);

t_list	*ft_list_new_element(int fd);
void	ft_list_delete_element(t_list **list, int fd);
int		ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_custom_strjoin(char *s1, char *s2);

#endif
