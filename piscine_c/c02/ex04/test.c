#include <unistd.h>
#include <stdio.h>
int ft_str_is_lowercase(char *str);
int main() {
	char src[100] = "asAgdas\0";

	printf("%d\n", ft_str_is_lowercase(src));
}



