/*
** EPITECH PROJECT, [YEAR]
** [NAME_OF_THE_PROJECT]
** File description:
** No file there, just an epitech header example.
** You can even have multiple lines if you want!
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_alpha(void)
{
    char c = 'a';

    while (c <= 'z') {
        my_putchar(c);
        c++;
    }
    my_putchar('\n');
    return (0);
}

int main(void)
{
    my_print_alpha();
    return (0);
}
