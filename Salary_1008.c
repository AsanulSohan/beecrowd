#include<stdio.h>
int main()
{
    int employees_num, hrs_num; 
    float perHr; 
    scanf("%d %d", &employees_num, &hrs_num); 
    scanf("%f", &perHr);


    printf("NUMBER = %d\n", employees_num); 
    printf("SALARY = U$ %.2f\n", hrs_num*perHr); 

    return 0; 


}