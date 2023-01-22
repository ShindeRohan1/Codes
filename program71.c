#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter name\n");
    //scanf("%s",name);
    scanf("%[^'\n']s",name);

    printf("%s",name);
    return 0;
}