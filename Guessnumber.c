#include <stdio.h>
int main()
{
  int num, a;
  while (1)
  {
    printf("\n \n \t \t \t Guess The Number \t \t \t \n  "); 
    printf(" \n Enter the number between 1 to 100 ::  ");
    scanf("%d", &num);
    if (num <= 100)
    {
      if (num == 25)
      {
        printf("Congo :), you guess correct number %d ", num);
        break;
      }
      else
      {
        printf("Sorry :(,you Guess Wrong number %d \n ", num);
        printf("For Hint press any single digit number ::  ");
        scanf("%d", &a);
        if (a <= 9)
        {
          printf("Sum of 20 and 5");
        }
        else
        {
          printf("Select the proper number !! ");
        }
      }
    }
  }
}