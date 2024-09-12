#include <stdio.h>

int main()
{
    float taxRate,salary;
    float salary2, tax;
    
    printf("Enter your salary amount: ");
    scanf("%f",&salary);
    printf("Enter tax rate: ");
    scanf("%f", &taxRate);

    tax = salary * (taxRate/100);
    salary2 = salary - tax;
    
    printf("Calculated tax: %.2f\n", tax);
    printf("Salary after tax: %.2f\n", salary2);

    return 0;
}