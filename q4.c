#include <stdio.h>

int main()
{
    float distance = 1207,wayFoward = 118 ,waybackward = 123;
    float fconsumed, fcost,bcost,bconsumed,consumed ,cost ,avg;
    
    printf("Enter your car average in km per liter greater than 0: ");
    scanf("%f",&avg);
    bconsumed = (distance)/avg;
    fconsumed = (distance)/avg;
    fcost = fconsumed * wayFoward;
    bcost = bconsumed * waybackward;
    cost = bcost + fcost;
    consumed = bconsumed + fcost;

    printf("The amount of petrol consumed =%f", consumed);
    printf("the total cost =%f", cost);
    return 0;



}