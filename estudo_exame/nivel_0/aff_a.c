#include <unistd.h>

void aff_a(void)
{
    char w;

    write(1, &w, 1);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    while (argc != 2)
    {
        while (argv[j][i] == 'z' || argv[j][i] != 'z')
        {
            aff_a();
            i++;
        }
        j++;
        write(1, "\0", 1);
    }
}