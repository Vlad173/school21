#include <stdio.h>

int ft_str_is_printable(char *str);


int main()
{
	char s[100];
	scanf("%s", &s);

	printf("%d\n", ft_str_is_printable(s));
}
