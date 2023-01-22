#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FindMax(int Arr[],int iSize)
{
    int iMAx = Arr[0];
    int i = 0;
    for(i = 0;i < iSize; i++)
    {
        if(Arr[i] > iMAx)
        {
            iMAx = Arr[i];
        }
    }
    return iMAx;

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

    iRet = FindMax(ptr,iLength);
    printf("Largest number is : %d",iRet);

    free(ptr);//Deallocate memory
    return 0;
}