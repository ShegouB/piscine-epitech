#include <stdio.h>
#include <limits.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    long result = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');

            if (sign == 1 && result > INT_MAX)
                return (0);
            if (sign == -1 && result > 2147483648LL)
                return (0);

            i++;
        } else {
            break;
        }
    }

    return ((int)(sign * result));
}

int main(void)
{
    printf("%d\n", my_getnbr("+---+--++---+---+---+-42"));
    printf("%d\n", my_getnbr("42a43"));
    printf("%d\n", my_getnbr("11000000000000000000000042"));
    printf("%d\n", my_getnbr("-1000000000000000000000042"));
    return (0);
}
