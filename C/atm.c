#include <stdio.h>
int main()
{
    int n, ammount, choice, wa, balance = 10000, pass = 5556;
a:
    printf("enter your password :");
    scanf("%d", &n);

    if (n == pass)
    {
        printf("welcome to Basic Bank.\n");

        printf("  ---MENU---\n");
        printf("Press [1] to Deposit.\n");
        printf("Press [2] to Withdraw.\n");
        printf("Press [3] to Balanace Inquiry\n");
        printf("Press [4] to Exit\n");
    start:
        printf("\nEnter Your Choise:");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:

        f:
            printf("enter your ammount :");
            scanf("%d", &ammount);
            if (ammount > 0)
            {
                balance = balance + ammount;
                printf("updated balance = %d", balance);
                goto start;
            }
            else
            {
                printf("Invalid Ammount.\n");
                goto f;
            }
            break;
        case 2:
        h:
            printf("enter your ammount :");
            scanf("%d", &wa);

            if (wa < 0)
            {
                printf("Invalid Ammount.\n");
                goto h;
            }

            else if (balance - wa < 500)
            {
                printf("insufficient ammount.\n");
                goto h;
            }

            else if (wa % 500 != 0)
            {
                printf("only money multlipy by 500 can be withdrawn \n");
                goto h;
            }
            else
            {
                printf("Withdraw successful.\n");
                balance = balance - wa;
                printf("new balance %d\n", balance);
                goto start;
            }
            break;

        case 3:

            printf("your balance is %d\n", balance);
            goto start;
            break;

        default:
            printf("Invalid Choise.\n");
            goto start;
        case 4:

            printf("Thank You for Banking With Us");
            return 0;
        }
    }

    else
    {
        printf("incorrect password.\n");
        goto a;
    }
}
