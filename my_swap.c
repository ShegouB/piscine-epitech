#include <stdio.h>

void my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int x = 10;
    int y = 20;

    my_swap(&x, &y);
    printf("%d %d\n", x, y);
    return (0);
}
