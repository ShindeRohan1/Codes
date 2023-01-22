#include<stdio.h>
void DisplayEvenOddDigits(int iNo)
{
    
   int iEvenCnt = 0;
   int iOddCnt = 0;
   int iDigit = 0;
   if(iNo == 0)
   {
   printf("Even digits are 1\n");
   printf("Odd digits are 0");
   return;
   }
   while(iNo != 0)
   {
    iDigit = iNo % 10;
    if(iDigit % 2 == 0)
    {
        iEvenCnt++;
    }
    else
    {
       iOddCnt++;
    }
    iNo = iNo / 10;
   }

   printf("Even digits are %d\n",iEvenCnt);
   printf("Odd digits are %d\n",iOddCnt);
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the number : \n");

    scanf("%d",&iValue);
    DisplayEvenOddDigits(iValue);

    


    return 0;
}