#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft.h"
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_strjoin_mod(char *s1, char *s2);
char	*ft_substr_mod(char *s, unsigned int start, size_t len);
int		ft_strlen_to_limit(char *str, int delimiter);
char	*ft_strchr_mod(char *str, int c);
char	*ft_strdup_mod(char *str);

#endif