#include <stdio.h>
#include <string.h>
int main()
{
    int choice, sum = 0, amount = 500, ans;
    int withdraw, amount1;
    char name[20];
        while (1)
        {
            printf("\n \t \t \t  *** Welcome ***\t \t \t \n");
            printf("\t \t \t  ATM Simulator \t \t \t \n");
            printf(" How Can I help you ? \n ");
            printf("\n1) For Check The balance  \n2) For Deposit \n3) For Withdraw \n4) For Exist \n  ");
            printf("Select the number ::  ");
            scanf("%d", &choice);
            if (choice > 4)
                printf("Select proper number !! ");
            else
            {
                switch (choice)
                {
                case 1:
                    printf("Your current balances is %d \n", amount);
                    break;

                case 2:
                    printf(" Your Name = ");
                    scanf("%s", name);
                    printf("Enter The Amount :: ");
                    scanf("%d", &amount1);
                    printf(" The Amount you deposit is %d \n ", amount1);
                    printf("Amount deposit Sucessfully !! \n ");
                    amount = amount + amount1;
                    printf("Your current Balances is %d", amount);
                    break;

                case 3:
                    printf(" Enter the amount for Withdraw : ");
                    scanf("%d", &withdraw);
                    if (withdraw > (amount - 500))
                    {
                        printf("Insuffient Balances !! \n ");
                        break;
                    }
                    else
                    {
                        printf("The Amount Withdraw Sucessfully !! \n");
                        amount = amount - withdraw;
                        printf("Your current balances is %d", amount);
                    }
                    break;

                case 4:
                    printf("Thank you for using it !!");
                    return 0;
                }
            }
        }
}