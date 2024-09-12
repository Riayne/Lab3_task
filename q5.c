#include <stdio.h>

int main()
{
    float P , R , T;
    float SI;
    
    printf("Enter principal amount between Rs.100 and Rs.1000000: ");
    scanf("%f",&P);
    printf("Enter rate of interest between 5 and 10 percent: ");
    scanf("%f",&R);
    printf("Enter time period between 1 to 10 years: ");
    scanf("%f",&T);
    SI = (float)(P*R*T)/100;
    printf("Your simple interest is =%f", SI);
    return 0;
}