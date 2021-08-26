char *ft_strncpy(char *dest, char *src, unsigned int n);
#include <stdio.h>

int main()
{
	char src[10] = "123456789\0";
	char dest[5] = "";

	printf("%s\n", ft_strncpy(dest, src, 5));
}
