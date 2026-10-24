#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

static void my_put_unsigned(unsigned int n)
{
    if (n >= 10) {
        my_put_unsigned(n / 10);
    }
    my_putchar((n % 10) + '0');
}

int my_put_nbr(int nb)
{
    unsigned int nb_abs;

    if (nb < 0) {
        my_putchar('-');
        nb_abs = (unsigned int)(-(nb + 1)) + 1;
    } else {
        nb_abs = (unsigned int)nb;
    }
    my_put_unsigned(nb_abs);
    return (0);
}

int main(void)
{
    my_put_nbr(42);
    my_putchar('\n');
    my_put_nbr(0);
    my_putchar('\n');
    my_put_nbr(-2147483647);
    my_putchar('\n');
    my_put_nbr(-2147483648);
    my_putchar('\n');
    return (0);
}
