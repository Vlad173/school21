#include <stdio.h>

#include "ft_stock_str.h"

int main(int argc, char *argv[])
{
	t_stock_str *res = ft_strs_to_tab(argc, argv); 
	for (int i = 0; argv[i] != NULL; ++i)
	{
		printf("%d: size = %d\n", i, res[i].size);
		printf("%d: str = %s\n", i, res[i].str);
		printf("%d: copy = %s\n", i, res[i].copy);
	}
	return (0);
}
