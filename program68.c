#include<stdio.h>
#include<stdbool.h>


bool ChechSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Please enter one character\n");
    scanf("%c",&cValue);

    bRet = ChechSmall(cValue);

    if(bRet == true)
    {
        printf("%c is small case latter\n",cValue);
    }
    else
    {
        printf("%c is not small case latter\n",cValue);
    }

    return 0;
}