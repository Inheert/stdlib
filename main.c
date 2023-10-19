#include "libft.h"
#include<stdio.h>
#include <string.h>

/* *******FT_ATOI******** */

/* *******FT_BZERO******** */
/*
int 	main(void)
{
	char *ptr;
	int	size;
	int	i;

	size = 10;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (0);
	}
	i = -1;
	while (++i < size)
	{
		ptr[i] = 'B';
	}
	ptr[i] = '\0';

	ft_bzero(ptr, 10);
	printf("%s\n", ptr);
	
	return (0);
}
*/

/* *******FT_ISALNUM******** */
/*
int	main(void)
{
	printf("%d", ft_isalnum('a'));
	return (0);
}
*/

/* *******FT_ISALPHA******** */
/*
int	main(void)
{
	printf("%d", ft_isalpha('0'));
	return (0);
}
*/

/* *******FT_ISASCII******** */
/*
int	main(void)
{
	printf("%d", ft_isascii(-2));
	return (0);
}
*/

/* *******FT_ISDIGIT******** */
/*
int	main(void)
{
	printf("%d", ft_isdigit(58));
	return (0);
}
*/

/* *******FT_ISPRINT******** */
/*
int	main(void)
{
	printf("%d", ft_isprint(130));
	return (0);
}
*/

/* *******FT_MEMCHR******** */
/*
int	main(void)
{
	char	*txt = "He\0llo";
	char	find = 'l';
	size_t	n = 5;
	printf("COMP: %d", strcmp(ft_memchr(txt, find, n), memchr(txt, find, n)));
	return (0);
}
*/

/* *******FT_MEMCPY******** */
/*
int	main(void)
{
	char	*src = "Hello Monde";
	int		size = 10;
	char	*dest = (char *)malloc((size) * sizeof(char));
	if (src == NULL)
		return (0);
	ft_memcpy(dest, src, size);
	printf("%s", dest);
	return (0);
}
*/

/* *******FT_MEMMOVE******** */
int	main(void)
{
	char	*src = "Hello Monde";
	int		size = 11;
	char	*dest = (char *)malloc((size) * sizeof(char));
	char	*destt = (char *)malloc((size) * sizeof(char));
	if (dest == NULL || destt == NULL)
		return (0);

	printf("%d", strcmp(ft_memmove(dest, src, size), memmove(destt, src, size)));
	return (0);
}

/* *******FT_MEMSET******** */
/*
int 	main(void)
{
	char *ptr;
	int	size;
	int	i;

	size = 10;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (0);
	}
	i = -1;
	while (++i < size)
	{
		ptr[i] = 'B';
	}
	ptr[i] = '\0';
	ft_memset(ptr, 'A', 3);
	printf("%s\n", ptr);
	
	return (0);
}
*/
/* *******FT_PUTCHAR_FD******** */
/*
int	main(void)
{
	ft_putchar_fd('H', 1);
	return (0);
}
*/

/* *******FT_PUTSTR_FD******** */
/*
int	main(void)
{
	ft_putstr_fd("Hello", 1);
	return (0);
}
*/

/* *******FT_STRCHR******** */
/*
int	main(void)
{
	char	*txt = "He\0llo";
	char	find = '\0';
	printf("\n COMP: %d", strcmp(ft_strchr(txt, find), strchr(txt, find)));
	return (0);
}
*/

/* *******FT_STRLEN******** */
/*
int	main(void)
{
	printf("%d", ft_strlen("Hello"));
	return (0);
}
*/

/* *******FT_STRNCMP******** */
/*
int	main(void)
{
	printf("%d", ft_strncmp("Hello", "Hello", 3));
	return (0);
}
*/

/* *******FT_TOLOWER******** */
/*
int	main(void)
{
	printf("%c", ft_tolower(90));
	return (0);
}
*/

/* *******FT_TOUPPER******** */
/*
int	main(void)
{
	printf("%c", ft_toupper(122));
	return (0);
}
*/
