#include<stdio.h>
//O(N/2)
void DisplayFactors(int iValue)
{     int i = 0;
      printf("Factors are : ");
      for(i = 1; i <= (iValue / 2); i++)
      {
        if(iValue % i == 0)
        {
            printf("%d\n",i);
        }
      }
}
int main()
{
    int iValue = 0;
    printf("Enter Number");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}