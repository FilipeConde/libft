// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
// {
// 	unsigned int	i;
// 	unsigned int	j;
// 	unsigned int	expected_len;

// 	i = 0;
// 	j = 0;
// 	expected_len = ft_strlen(dest) + ft_strlen(src);
// 	if (size == 0)
// 		return (ft_strlen(src));
// 	if(ft_strlen(dest) >= (int) size)
// 		return (ft_strlen(src) + size);
// 	while (dest[i] != '\0')
// 	{
// 		i++;
// 	}
// 	while (src[j] != '\0' && i < size - 1)
// 	{
// 		dest[i++] = src[j++];
// 	}
// 	dest[i++] = '\0';

// 	return (expected_len);
// }


// #include <bsd/string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	dest1[12] = "01234";
// 	char	dest2[12] = "01234";
// 	char	*src = "abcde";
// 	int	size = 0;
// 	int	rest1;
// 	int	rest2;

// 	rest1 = strlcat(dest1, src, size);
// 	printf("%s\n", dest1);
// 	printf("%d\n", rest1);
// 	//printf("%d\n", ft_strlen("0123"));
// 	rest2 = ft_strlcat(dest2, src, size);
// 	printf("%s\n", dest2);
// 	printf("%d\n", rest2);

// }
