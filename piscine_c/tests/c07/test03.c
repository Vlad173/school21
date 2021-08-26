#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char *argv[]) 
{
	char *dest = ft_strjoin(argc, argv, "VLAD\0");
	printf("%s\n", dest);
	return (0);
}
