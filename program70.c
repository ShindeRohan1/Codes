#include<stdio.h>
#include<stdbool.h>


bool ChechSmall(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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
        printf("%c is digit\n",cValue);
    }
    else
    {
        printf("%c is not digit\n",cValue);
    }

    return 0;
}