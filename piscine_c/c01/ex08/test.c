void ft_sort_int_tab(int *tab, int size);

#include <stdio.h>


int main()
{
	int arr1[1] = {153};

	for (int i = 0; i < 1; ++i) {
		printf("%d ", arr1[i]);
	}
	ft_sort_int_tab(arr1, 1);
	printf("\n");
	for (int i = 0; i < 1; ++i) {
		printf("%d ", arr1[i]);
	}

}
