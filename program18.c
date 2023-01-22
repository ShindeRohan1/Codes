#include<stdio.h>
void Display(int number)
{
   int i =  0;

   while(i < number)
   {
    printf("jay ganesh \n");
    i++;
   }
    
}
int main()
{   
    int number;
    printf("Enter the number");
    scanf("%d",&number);

    Display(number);
    
    return 0;
}