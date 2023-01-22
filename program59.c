#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//time complexity best case 1 wrost case n avarage case is 1 to n

int CheckOccerance(int Arr[],int iSize ,int iValue)
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
        return -1;
    }
    else{
        return iCnt;
    }
  
}


int main()
{   
    int *ptr = NULL;
    int iLength = 0,i = 0,iValue = 0;
    int iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //Allocate memory of array

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter elements");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

   printf("Enter the to check");
   scanf("%d",&iValue);

    iRet = CheckOccerance(ptr , iLength ,iValue);
    if(iRet == -1)
    {
        printf("number is not present");
    }
    else
    {
        printf("index is %d\n",iRet);
    }

    free(ptr);//Deallocate memory
    return 0;
}