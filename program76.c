#include<stdio.h>
int CountCh(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if('a' == *str  || 'A' == *str){
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[30];
    int iRet = 0;
   
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

   

     
    iRet = CountCh(Arr);

    printf("frequency is  %d\n",iRet);
    
    return 0;
}