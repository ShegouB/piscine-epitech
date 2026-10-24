#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_evil_str(char *str)
{
    int i = 0;
    int j = 0;
    char tmp;

    if (str == NULL)
        return (NULL);

    while (str[j] != '\0')
        j++;
    j--;

    while (i < j) {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return (str);
}

int main(void)
{
    char *s = strdup("abcdef");
    printf("%s\n", my_evil_str(s));
    free(s);
    return (0);
}
