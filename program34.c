#include<stdio.h>
#include<stdbool.h>
//check prime number
//reusability

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

bool CheckPerfect(int iData)
{
    int iAns = 0;

    iAns = AddFactors(iData);

    if(iAns == iData)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not perfect number\n",iValue);
    }
    

    return 0;
}