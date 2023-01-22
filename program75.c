#include<stdio.h>
int strlenX(char str[])
{
    int iCnt = 0, i = 0;

   for(i = 0;str[i] != '\0';i++) //\0 is a last in string
    {
        iCnt++;
       

    }
    return iCnt;

}
int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
     
    iRet = strlenX(Arr);

    printf("Number of characters are %d\n",iRet);
    
    return 0;
}