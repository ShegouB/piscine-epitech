#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_comb(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int first = 1;

    while (a <= 9) {
        b = a + 1;
        while (b <= 9) {
            c = b + 1;
            while (c <= 9) {
                if (!first) {
                    my_putchar(',');
                    my_putchar(' ');
                }
                first = 0;
                my_putchar('0' + a);
                my_putchar('0' + b);
                my_putchar('0' + c);
                c++;
            }
            b++;
        }
        a++;
    }
    my_putchar('\n');
    return (0);
}

int main(void)
{
    my_print_comb();
    return (0);
}
