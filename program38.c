#include<stdio.h>
//sum of non Factors
//O(N)

int SumNonFactors(int iNo)
{
      int i = 0;
      int iSum = 0;
      
      for(i = 1;i < iNo;i++)
      {
        if((iNo % i) != 0)
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
    printf("ENter the number \n");
    scanf("%d",&iValue);

    iSum = SumNonFactors(iValue);
    printf("summation is :%d",iSum);

    return 0;
}