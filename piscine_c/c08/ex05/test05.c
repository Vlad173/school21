#include <stdio.h>

#include "ft_stock_str.h"

int main(int argc, char *argv[])
{
	t_stock_str *res = ft_strs_to_tab(argc, argv); 
	ft_show_tab(res);
	return (0);
}
