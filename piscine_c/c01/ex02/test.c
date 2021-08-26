void ft_swap(int *a, int *b);
#include <stdio.h>
int main()
{
	int a = 5;
	int b = 10;
	ft_swap(&a, &b);

	printf("%d%d", a, b);
}
