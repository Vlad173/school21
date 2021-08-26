void ft_foreach(int *tab, int length, void(*f)(int));
void	ft_putnbr(int nb);

int main(void)
{
	void (*f) (int) = &ft_putnbr;
	int	arr[5] = {-125, 12, 0, 12, 100};
	ft_foreach(arr, 5, f);
	return (0);
}
