#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

void check(int a, int b) 
{
	a == b ? printf("OK: %d = %d\n", a, b) : printf("Error: %d != %d\n", a, b);
}

int main() 
{
	{
		char s1[100] = "abcde\0";
		char s2[100] = "ab de\0";
		check(strlcat(s1, s2, 11), ft_strlcat(s1, s2, 11));
	}
	
	{
		char s1[100] = "abcde\0";
		char s2[100] = "  b\0";
		check(strlcat(s1, s2, 8), ft_strlcat(s1, s2, 8));
	}

	{
		char s1[100] = "abcde\0";
		char s2[100] = "abcdef\0";
		check(strlcat(s1, s2, 1), ft_strlcat(s1, s2, 1));
	}
	return (0);
}

