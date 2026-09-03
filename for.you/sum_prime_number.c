#include <stdio.h>
int main()
{
  int number, count = 0, totalPrimeNumbers = 0, sum = 0, last, first;
  printf("enter first and last number: ");
  scanf("%d %d", &first, &last);
  for (number = first; number <= last; number++)
  {
    count = 0;
    if (number <= 1)
      count++;
    else
    {
      for (int i = 2; i < number; i++)
      {
        if (number % i == 0)
        {
          count++;
          break;
        }
      }
    }
    if (count == 0)
    {
      printf("%d ", number);
      totalPrimeNumbers++;
      sum += number;
    }
  }
  printf("\ntotal prime number is: %d\n", totalPrimeNumbers);
  printf("the sum of prime numbers is: %d", sum);
}