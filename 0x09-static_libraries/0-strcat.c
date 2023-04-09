char *_strcat(char *dest, char *src)
{
	int i, dest_len;
	
	for (i = 0; src[i] != '\0'; i++) 
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
