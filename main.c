#include "libft.h"

/* *******FT_ATOI******** */

/* *******FT_BZERO******** */
int 	main(void)
{
	char *ptr;
	int	size;
	int	i;

	size = 10;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	i = 0;
	while (i++ < size)
	{
		ptr[i] = 'B';
	}
	ptr[i] = '\0';
	printf("%s\n", ptr);
	
	return (0);
}

/* *******FT_ISALNUM******** */

/* *******FT_ISALPHA******** */

/* *******FT_ISASCII******** */

/* *******FT_ISDIGIT******** */

/* *******FT_ISPRINT******** */

/* *******FT_MEMCPY******** */

/* *******FT_MEMSET******** */
/*
int 	main(void)
{
	char *ptr;
	int	size;
	int	i;

	size = 10;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	i = 0;
	while (i++ < size)
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

/* *******FT_PUTSTR_FD******** */

/* *******FT_STRLEN******** */

/* *******FT_STRNCMP******** */

/* *******FT_TOLOWER******** */

/* *******FT_TOUPPER******** */
