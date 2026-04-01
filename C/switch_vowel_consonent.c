#include <stdio.h>
int main()
{
    // switch(expression)  case 1.....n
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    switch (ch)
    {
    case 'a':
    {
        printf("vowel");
        break;
    }
    case 'e':
    {
        printf("vowel");
        break;
    }
    case 'i':
    {
        printf("vowel");
        break;
    }
    case 'o':
    {
        printf("vowel");
        break;
    }
    case 'u':
    {
        printf("vowel");
        break;
    }
    case 'A':
    {
        printf("VOWEL");
        break;
    }
    case 'E':
    {
        printf("VOWEL");
        break;
    }
    case 'I':
    {
        printf("VOWEL");
        break;
    }
    case 'O':
    {
        printf("VOWEL");
        break;
    }
    case 'U':
    {
        printf("VOWEL");
        break;
    }
    default:
        printf("consonant");
    }
    return 0;
}
