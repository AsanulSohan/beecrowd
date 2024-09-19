#include<stdio.h>
int main()
{
    char name[10]; 
    scanf("%s", &name); 
    double fixed_salary, sales_total, commision, TOTAL; 
    scanf("%lf %lf", &fixed_salary, &sales_total); 
    commision= sales_total*(0.15); 
    TOTAL=fixed_salary+commision; 
    printf("TOTAL = R$ %.2lf\n", TOTAL); 

    return 0; 
    
}