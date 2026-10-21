#include <stdio.h>

int main()
{
    char str[34];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Iterate through character indices until null terminator is found [33]
    while (str[length] != '\0')
    {
        length++;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}