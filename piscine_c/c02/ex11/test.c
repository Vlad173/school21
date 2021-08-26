#include <stdio.h>
#include <unistd.h>
void    ft_print_hex(int a)
{   
    char c1;
    char c2;
	int mod;
    
	mod = a % 16;
    c1 = a / 16 + '0';
    if (a % 16 > 9)
    {   
        c2 = mod + 'a' - 10;
    }
    else
    {   
        c2 = (a % 16) + '0';
    }
    write(1, "\\", 1);
    write(1, &c1, 1);
    write(1, &c2, 1);
}

int main()
{
	int a = 31;
	ft_print_hex(a);


}
