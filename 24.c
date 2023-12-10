#include <stdio.h>

int main()
{
    char start = 'a';
    char end = 'z';

    printf("Neha sharma\n");
    printf("Numbers from 'a' to 'z':\n");

    for (char ch = start; ch <= end; ch++) {
        printf("%c ", ch);
    }

    printf("\n");

    return 0;
}
