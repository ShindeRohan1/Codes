#include<stdio.h>
int CountCh(char *str , char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(ch == *str){
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
    char ch;
   
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character\n");
    scanf("%c",&ch);
     
    iRet = CountCh(Arr,ch);

    printf("frequency is  %d\n",iRet);
    
    return 0;
}