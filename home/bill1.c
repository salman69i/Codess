#include <stdio.h>
int main()
{
  float n, bill = 0, dc = 0;
  int user;
  printf("enter unit :");
  scanf("%f", &n);
st:
  printf("enter customer type :\n 1-domestic\n 2-commercial\n");
  printf("enter your choice :");
  scanf("%d", &user);
  if (n < 0)
  {
    printf("Invalid input");
  }
  switch (user)
  {
  case 1:
    if (n > 0 && n <= 100)
    {
      bill = n * 5;
    }
    else if (n > 100 && n <= 200)
    {
      bill = (100 * 5) + ((n - 100) * 7);
    }
    else if (n > 200)
    {
      bill = (100 * 5) + (100 * 7) + ((n - 200) * 10);
    }
    break;

  case 2:
    if (n > 0 && n <= 100)
    {
      bill = n * 8;
    }
    else if (n > 100 && n <= 200)
    {
      bill = (100 * 8) + ((n - 100) * 12);
    }
    else if (n > 200)
    {
      bill = (100 * 8) + (200 * 12) + ((n - 200) * 15);
    }
    break;
  default:
  {
  }
  }
  printf("bill before discount : %.2f\n", bill);
  if (bill > 3000)

    dc = bill * (10.0 / 100.0);
  printf("discout : %.2f\n", dc);
  bill = bill - dc;
  printf("Electricity bill after: %.2f", bill);
}