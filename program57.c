#include<stdio.h>
#include<stdlib.h>
void AddEvenOdd(int Arr[],int iSize)
{
    int iSumEven = 0;
    int iSumOdd = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSumEven  = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    printf("Sum of Even numbers is : %d\n",iSumEven);
    printf("Sum of Odd numbers is : %d\n",iSumOdd);
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

    AddEvenOdd(ptr,iLength);
    free(ptr);//Deallocate memory
    return 0;
}