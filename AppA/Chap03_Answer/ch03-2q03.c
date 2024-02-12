#include <stdio.h>
#include <stdlib.h>

int main(int arg, char *argv[])
{
    printf("%d...%d\n", atoi(argv[1]) / atoi(argv[2]), atoi(argv[1]) % atoi(argv[2]));
}