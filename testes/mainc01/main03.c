#include <stdio.h>

int	main(void)
{	
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 5;

	ft_div_mod(a, b, &div, &mod);
	printf("div:%d, mod:%d", div, mod);
}

