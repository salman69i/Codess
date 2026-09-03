#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if(ch>='a' && ch <='z')
    printf("small letter");
    else if(ch>='A' && ch<='Z')
    printf("capital letter");
    else
    printf("not a letter");
    return 0;

}