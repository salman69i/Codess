/*#include<stdio.h>
int main()
{
    int nmb1,nmb2,sum;
    float avg;
    printf("Enter any two numbers = ");
    scanf("%d %d" ,&nmb1,&nmb2);
    sum = nmb1+nmb2;
    printf("The value is = %d\n",sum);

    avg = (float)sum/2;
    printf("The average value is = %.1f",avg);
}*/


#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("Enter two numbers :");
    scanf("%d %d", &num1, &num2);

    result = num1 + num2;
    printf("sum = %d\n",result);

     result = num1 - num2;
    printf("sub = %d\n",result);

     result = num1 * num2;
    printf("Mul = %d\n",result);

     result = num1 / num2;
    printf("Div = %d\n",result);

     result = num1 % num2;
    printf("remainder = %d\n",result);


    return 0;


}
