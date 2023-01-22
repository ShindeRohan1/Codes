#include<stdio.h>
int Summation(int iValue)
{
    int iSum = 0;
    int i = 0;
    for(i = 1;i <= iValue;i++)
    {
        iSum = iSum + i;
    }
    return iSum;


}
int main()
{
    int iValue = 0;
    
    int iRet = 0;
    
    printf("Enter the value \n");
    scanf("%d",&iValue);
    iRet = Summation(iValue);

    printf("Summation is : %d\n",iRet);

    return 0;
}