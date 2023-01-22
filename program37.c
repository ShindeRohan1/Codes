#include<stdio.h>

void DisplayNonFactors(int iNo)
{
      int i = 0;
      
      for(i = 1;i < iNo;i++)
      {
        if((iNo % i) != 0)
        {
            printf("%d\n",i);
        }
      }
}
int main()
{
    int iValue = 0;

    printf("ENter the number \n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);
    return 0;
}