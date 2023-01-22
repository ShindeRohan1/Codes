#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void DisplayReverse(int Arr[], int iSize)
{
    int iCnt = 0;
    for(iCnt = iSize - 1;iCnt >= 0;iCnt--)
    {
        printf(" %d\t",Arr[iCnt]);
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
    
    DisplayReverse(ptr,iLength);

    free(ptr);//Deallocate memory
    return 0;
}