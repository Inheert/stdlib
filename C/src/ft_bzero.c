void 	bzero(void *s, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s[i] = '\0';
		i++;
	}
}