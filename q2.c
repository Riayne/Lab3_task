#include <stdio.h>

void main()
{
    int num1 ,num2 ,temp;

    printf("Enter first number: ");
    scanf("%d",&num1);

    printf("Enter second number: ");
    scanf("%d",&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("the first number is now:%d", num1);
    printf("the second number is now:%d",num2);
    

}