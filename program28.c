#include<stdio.h>
//O(N/2)
int AddFactors(int iValue)
{     int i = 0;
      int iSum = 0;
      printf("Factors are : ");
      for(i = 1; i <= (iValue / 2); i++)
      {
        if(iValue % i == 0)
        { 
           iSum = iSum + i;
        }
      }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iSum = 0;
    printf("Enter Number");
    scanf("%d",&iValue);

    iSum = AddFactors(iValue);
    printf("Addition of Factors is %d",iSum);

    return 0;
}