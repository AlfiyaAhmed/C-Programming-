#include <stdio.h>
int main()
{
    int Addition ,Substraction, Multipication,Division,x,y ;
    char operation, a, b,s,m,d;
    
    printf( "\t \t \t CALCULATOR \n" );
    printf("Enter The Number :: ");
    scanf("%d", &x);
    printf("Enter The Number :: ");
    scanf("%d", &y);
    printf("\t \t \t *** Select The operation *** \t \t \t \n");
    printf("Addition = a\n");
    printf("Substraction = s\n");
    printf("Multiplication = m\n");
    printf("Division = d\n");
    Addition=x+y;
    Substraction=x-y;
    Multipication=x*y;
    Division=x/y;
    printf("Enter the Operation : ");
    scanf(" %c",&operation);
    if(operation=='a')
    {
        printf("%d",Addition);
    }
    else if (operation=='s')
    {
        printf("%d",Substraction);
    }
    else if (operation=='m')
    {
        printf("%d",Multipication);
    }
    else if (operation=='d')
    {
        printf("%d",Division);
    }
    return 0 ;
}