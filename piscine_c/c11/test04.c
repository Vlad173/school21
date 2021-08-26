#include <stdio.h>
int ft_is_sort(int *tab, int length, int(*f)(int, int));
int	ft_for_sort(int a, int b)
{
	if (a < b)
		return (-1);
	if (a > b)
		return (1);
	return (0);
}	

int main(int argc, char *argv[])
{
	int	arr[7] = {1, 2, 3, 3, 3, 4 , 5};
	if (ft_is_sort(arr, 5, ft_for_sort))
		printf("Array is sorted!\n");
	else
		printf("Array is not sorted!\n");
	return (0);
}
