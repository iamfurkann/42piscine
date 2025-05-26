char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;

	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

#include <stdio.h>

int	main()
{
	char s1[50] = "string";
	printf("%s", ft_strcpy(s1, "stingiki"));
	return 0;
}	
