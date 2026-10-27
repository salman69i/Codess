#include <stdio.h>

void call()
{
    printf("hello world\n");
}
void name(char name[])
{
    printf("hello: %s ", name);
}
void age(int age)
{
    printf("and my age is %d \n", age);
}
void sum()
{
    int x, y;
    printf("enter two value: ");
    scanf("%d%d", &x, &y);
    int sum = x + y;
    printf("sum is: %d", sum);
}
void parameter(char name[]) // here name is a parameter
{
    printf("hello %s\n ", name);
}
void passArray(int array[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", array[i]);
    }
}
int main()
{
    // call();
    // name("salman amin");
    // age(10);
    // sum();
    // parameter("salman"); // here the name i have given is an argument
    int array[5] = {43, 45, 67, 22, 56};
    passArray(array);
}