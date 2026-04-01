 /*#include<stdio.h>
int main()

{
    char name[50];

    printf("Enter your name :");
    scanf("%s",name);
    printf("Hello %s",name);

}*/

/*#include<stdio.h>
int main()

{
    char name[50];

    printf("Enter your name :");
    gets(name);
    printf("Hello");
    puts(name);

}*/


/*#include<stdio.h>
int main()

{
    char name[50];

    printf("Enter your name :");
    fgets(name, sizeof(name), stdin);
    printf("Hello  ");
    puts(name);

}*/

#include<stdio.h>
#include<string.h>
int main()

{
    char name[50];

    printf("Enter your name :");
    fgets(name, sizeof(name), stdin);

   size_t len = strlen(name);                //kisue buji nai vaii
   if (name [len- 1]= '\n') {
    name[len - 1] = '\0';
   }

    printf("Hello  ");
    puts(name);

}





















