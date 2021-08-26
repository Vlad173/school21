#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

void check(char *a, char *b) 
{
	!strcmp(a, b) ? printf("OK: %s = %s\n", a, b) : printf("Error: %s != %s\n", a, b);
}

int main() 
{
	{
		char s1[100] = "abcde\0";
		char s2[100] = "ab de\0";
		check(strncat(s1, s2, 2), ft_strncat(s1, s2, 2));
	}
	
	{
		char s1[100] = "abcde\0";
		char s2[100] = "  b\0";
		check(strncat(s1, s2, 3), ft_strncat(s1, s2, 3));
	}

	{
		char s1[100] = "abcde\0";
		char s2[100] = "abcdef\0";
		check(strncat(s1, s2, 1), ft_strncat(s1, s2, 1));
	}
	return (0);
}

