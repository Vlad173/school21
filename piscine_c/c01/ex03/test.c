#include <stdio.h> 
void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a = 13;
	int b = 6;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);

	printf("%d\n%d\n", div, mod);
}
