#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int	main()
{
	char *a;
	char *b;

	b = ft_strdup(a);
	if (b == NULL)
		printf("NULL!\n");
	printf("a = [%p]%s\nb = [%p]%s\n", a, a,b, b);
	return (0);
}	
