#include <stdio.h>

int main()
{
    char st[30];
    fgets(st); // The entered string is stored in st!

    printf("%s", st);
    // puts(st);
    printf("hey");

    return 0;
}