/*#include<stdio.h>
int main()
{
    int nmb1,nmb2,sum;
    printf("Enter two numbers :");
    scanf("%d %d",&nmb1,&nmb2);
    sum = nmb1+nmb2;
    printf("Sum = %d",sum);
    getch();
}*/

#include<stdio.h>
int main()
{
    int nmb1,nmb2,nmb3,sum;
    float avg;
    printf("Enter three numbers :");
    scanf("%d %d %d",&nmb1,&nmb2,&nmb3);
    sum = nmb1+nmb2+nmb3;
    avg = (float)sum/3;
    printf("sum = %d\n",sum);
    printf("avg = %.1f",avg);

}

