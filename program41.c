#include<stdio.h>
//O(N/4)

void DisplayEvenFactor(int iNo)
{
    int i = 0;
     
     for(i = 2; i <= (iNo / 2); i=i+2)
     {
        if(iNo % i == 0) 
        {
            printf("%d\n",i);
        }
     }
}

int main()
{
    int iValue = 0;

    printf("Enter the number");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}