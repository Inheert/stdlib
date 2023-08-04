void *ft_memset(void *ptr, int value, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ptr[i] = value;
		i++;
	}
	return (ptr);
}