#include <stdio.h>
int main()
{
    char name[30];
    printf("enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("name: ");
    puts(name);
    return 0;
}