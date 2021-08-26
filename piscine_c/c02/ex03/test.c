#include <unistd.h>
#include <stdio.h>
int ft_str_is_numeric(char *str);
int main() {
	char src[5] = "1a24\0";

	printf("%d\n", ft_str_is_numeric(src));
}



