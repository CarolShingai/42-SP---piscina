#include <stdio.h>

int	main(void)
{	
	int	a;
	int	b;	

	
	a = 10;
	b = 2;

	ft_swap(&a, &b);
	printf("valor de a:%d, valor de b:%d", a, b);
	return (0);
}
