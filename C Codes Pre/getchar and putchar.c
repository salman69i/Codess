/*#include<stdio.h>
int main()
{

    char character;
    printf("Enter any character :");
    scanf("%c",&character);
    printf("You have entered : %c",character);
    getch();


}*/

/*#include<stdio.h>
int main()
{

    char character;
    printf("Enter any character :");
    character = getchar();                           //buji nai
    printf("You have entered : %c",character);
    getch();

}*/

#include<stdio.h>
int main()
{

    char character;
    printf("Enter any character :");         //getchar pore r putchar age hoi
    character = getchar();
    printf("You have entered : ");
    putchar(character);                            //buji nai

}




























