#include<stdio.h>
#include <string.h>
#include "libft.h"

/* *******FT_ATOI******** */
/*
int	main(void)
{
	char	*str = "\n\v\r\f\t-0115d4\0";
	printf("%d, %d", ft_atoi(str), atoi(str));
	return (0);
}
*/

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

/* *******FT_MEMCMP******** */
/*
int	main(void)
{
	char	*s1 = "Hello";
	char	*s2 = "HEllo";
	printf("%d, %d", ft_memcmp(s1, s2, 2), memcmp(s1, s2, 2));
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
/*
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
*/

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

/* *******FT_STRLCAT******** */

int	main(void)
{
	int		size = 15;
	int		i = 0;
	char	*src = "Hello";
	char	*dest = (char *)malloc(size * sizeof(char));
	
	while (i < 10 - 1)
		dest[i++] = 'A';
	dest[i] = '\0';
	printf("%lld\n%s", ft_strlcat(dest, src, 15), dest);
	return (0);
}


/* *******FT_STRLCPY******** */
/*
int	main(void)
{
	int		size = 5;
	char	*src = "Heazfazfzllo";
	char	*dest = (char *)malloc(size * sizeof(char));

	printf("%lld\n%s", ft_strlcpy(dest, src, size), dest);
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

/* *******FT_STRNSTR******** */
/*
int	main(void)
{
	printf("%s", ft_strnstr("abcdeMAN", "MAN", 20));
	return (0);
}
*/

/* *******FT_STRRCHR******** */
/*
int	main(void)
{
	char	*src = "Hello Monde";
	char	c = 'o';
	printf("%s\n", strrchr(src, c));
	printf("%s\n", ft_strrchr(src, c));
	printf("%d", strcmp(ft_strrchr(src, c), strrchr(src, c)));
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
