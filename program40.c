#include<stdio.h>
void DisplayReverse(int iNo)
{
    int i;

    for(i = iNo; i >=1; i--)
    {
        printf("%d\n",i);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");

    scanf("%d",&iValue);

    DisplayReverse(iValue);

    return 0;
}