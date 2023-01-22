#include<stdio.h>
#include<stdbool.h>
//check prime number


//O(N/2)
bool CheckPerfect(int iValue)
{     int i = 0;
      int iSum = 0;

     
      for(i = 1; i <= (iValue / 2); i++)
      {
        if(iValue % i == 0)
        { 
           iSum = iSum + i;

        }
      }
    if(iSum == iValue)
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