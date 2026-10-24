#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return (0);
}

int main(void)
{
    my_isneg(-42);
    my_putchar('\n');
    my_isneg(0);
    my_putchar('\n');
    my_isneg(7);
    my_putchar('\n');
    return (0);
}
