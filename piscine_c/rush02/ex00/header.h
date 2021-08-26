/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeredyt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:51:16 by pmeredyt          #+#    #+#             */
/*   Updated: 2021/08/22 20:51:04 by pmeredyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# define DICT_ERROR 0
# define ERROR 1
# define BUFFSIZE 1024

typedef struct s_elem
{
	char	*value;
}	t_elem;

typedef struct s_list
{
	char			*data;
	struct s_list	*next;
}	t_list;

// split
void	ft_allocator(char **result, char *str, char *charset);
void	ft_allocator1(char *str, char **temp, int i, int j);
int		ft_count_words(char *str, char *charset);
int		ft_check_charset(char c, char *charset);
char	**ft_split(char *str, char *charset, int *count);

// join
char	*ft_strcat(char *dest, char *src);
int		ft_entire_length(int size, char **strs);
int		calculate_length(int size, char **strs, char *sep);
char	*ft_strjoin(int size, char **strs, char *sep);

// dictionary
int		init_entry(char *number, char *value, t_elem **arr);
t_elem	**init_dictionary(void);
void	free_dictionary(t_elem **arr);

// checker
int		ft_strlen_and_check(char *str, int *count);
int		check_zeros(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);

// list
t_list	*ft_create_elem(char *data);
void	ft_list_push_back(t_list **begin_list, char *data);
void	print_list(t_list *begin);
void	ft_list_clear(t_list *begin_list);

// parse
void	ft_map_copy(char **str, char *file, int count);
char	*ft_map(char *file);
void	clear_arr(char **arr, int size);
int		parse_line(char *line, t_elem **arr, int *flag);
int		parse_file(char	*file, t_elem **arr);

// print_messages
void	putstr(char *str);
void	num_to_lets(char *number, t_elem **arr);
void	print_error(int error);

// utils
int		ft_strlen(char *str);
void	replace_colon(char *str);

#endif
