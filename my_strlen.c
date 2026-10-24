#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int main(void)
{
    printf("%d\n", my_strlen("Hello"));
    return (0);
}
