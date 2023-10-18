#ifndef LIBFT_H
# define LIBFT_H

// STDIO INCLUDE TO DELETE !!
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
// typedef unsigned int    size_t;

int  	ft_isalpha(int c);
int  	ft_isascii(int n);
int  	ft_isdigit(int c);
int 	ft_isalnum(int c);
int 	ft_tolower(int c);
int  	ft_toupper(int c);
int 	ft_isprint(int c);
int 	ft_strncmp(const char *s1, const char *s2, int n);
int     ft_strlen(char *str);
void	ft_putchar_fd(char c, int fd);
void 	ft_putstr_fd(char *s, int fd);
void 	ft_bzero(void *s, size_t n);
void 	*ft_memset(void *ptr, int value, size_t size);
void 	*ft_memcpy(void *dest, const void *src, size_t size);

# endif