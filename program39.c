#include<stdio.h>

void DisplayTable(int iNo)
{
    int i = 0;
    int iNumber = 0;

    for(i = 1; i <= 10; i++)
    {
        iNumber = i * iNo;
        printf("%d\n",iNumber);
    }
}
int main()
{   
    int iNumber;
    printf("Enter the number \n");
    scanf("%d",&iNumber);
    DisplayTable(iNumber);
    return 0;

}