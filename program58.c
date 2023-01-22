#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//time complexity best case 1 wrost case n avarage case is 1 to n

bool CheckOccerance(int Arr[],int iSize ,int iValue)
{
   int iCnt = 0;
   

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iValue == Arr[iCnt])
        {
            
            break;
        }
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{   
    int *ptr = NULL;
    int iLength = 0,i = 0,iValue = 0;
    bool bRet = false;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //Allocate memory of array

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter elements");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

   printf("Enter the elements to find out the frequency");
   scanf("%d",&iValue);

    bRet = CheckOccerance(ptr , iLength ,iValue);
    if(bRet == true)
    {
        printf("number is present");
    }
    else
    {
        printf("number is not present");
    }

    free(ptr);//Deallocate memory
    return 0;
}