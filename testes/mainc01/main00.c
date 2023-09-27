#include <unistd.h>

int	main(void)
{
	int 	a;
	
	a = 10;

	ft_ft(&a);
	write(1, &a, 1);
}

