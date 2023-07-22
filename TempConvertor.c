#include <stdio.h>
int main()
{
    float celcius, fahrenhit;
    int num;
    while (1)
    {
        printf("\n \n \t \t \t **** Temperature Convertor ****\t \t \t \n");
        printf("(1) Fahrenhit to Celcius\n");
        printf("(2) Celcius to Fahrenhit\n");
        printf("(3) Exit\n ");
        printf("Enter :: ");
        scanf("%d", &num);
        if (num == 1)
        {
            printf("Enter the Number :: ");
            scanf("%f", &fahrenhit);
            celcius = (5.0 / 9.0) * (fahrenhit - 32);
            printf("The celcius is %f ", celcius);
        }
        else if (num == 2)
        {
            printf("Enter the Number : ");
            scanf("%f", &celcius);
            fahrenhit = celcius * (9.0 / 5.0) + 32;
            printf("The celcius is %f \n ", fahrenhit);
        }
        else if(num==3)
        {
            printf("thank you !!");
            break;
        }
        else
        {
            printf("Select correct option !! ");
        }

    }
}