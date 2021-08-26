#include <stdio.h>

char **ft_split(char *str, char *charset);
int	ft_count_words(char *str, char *charset);

int main(int argc, char *argv[])
{
	int k = ft_count_words(argv[1], "SEP\0");
//	char **str = ft_split(argv[1], "SEP\0");
	
//	for (int i = 0; str[i] != NULL; ++i)
//	{
//		printf("%s\n", str[i]);
//	}
	getchar();
	return (0);
}
