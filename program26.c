#include<stdio.h>
//O(N)
int Factorial(int iValue)
{
    int iFact = 1;
    int i = 0;
    for(i = 1;i <= iValue;i++)
    {
        iFact = iFact * i;
    }
    return iFact;


}
int main()
{
    int iValue = 0;
    
    int iRet = 0;
    
    printf("Enter the value \n");
    scanf("%d",&iValue);
    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d\n",iValue,iRet);

    return 0;
}