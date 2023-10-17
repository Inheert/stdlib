#include "libft.h"

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