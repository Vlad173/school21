#include <unistd.h>
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src);


int main() {
	char src[6] = "hello\0";
	char *dest;

	printf("%s\n", ft_strcpy(dest, src));
}



