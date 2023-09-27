#include <stdio.h>
void ft_reverse_print(char *src, int size)
{
    char temp;
    int i;
    int z;
    
    i = 0;
    z = size - 1;
    while (i < size)
    {
        temp = src[i];
        src[i] = src[z];
        src[z] = temp;
        i++;
        z--;
    }
}


int main(void)
{   
    char x[] = "paralelepipedo";
    ft_reverse_print(x, 15);
    printf("%s\n", x);
    return (0);
}
