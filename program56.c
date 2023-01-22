#include<stdio.h>
#include<stdlib.h>

void DislpayEvenOdd(int Arr[],int iSize)
{
    int iEvenCnt = 0;
    int iOddCnt = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
        else{
             iOddCnt++;
        }
    }
    printf("Even numbers are: %d\n",iEvenCnt);
    printf("Odd numbers are: %d\n",iOddCnt);
}


int main()
{   
    int *ptr = NULL;
    int iLength = 0,i = 0, iRet = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //Allocate memory of array

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter elements");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    DislpayEvenOdd(ptr,iLength);
    free(ptr);//Deallocate memory
    return 0;
}