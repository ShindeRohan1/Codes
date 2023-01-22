#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
    if(iNo % 3 == 0)  
    {   
        if(iNo % 5 == 0)
        {
        return true;
        }
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

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = DivisibleByThreeAndFive(iValue);

    if(bRet == true){
        printf("%d is Divisible by three and five",iValue);
    }
    else
    {
        printf("%d is not Divisible by three and five",iValue);
    }

    return 0;
}