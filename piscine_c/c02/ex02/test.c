#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str);
int main() {
	char src[7] = "abf1da\0";

	printf("%d\n", ft_str_is_alpha(src));
}



