#include<stdio.h>
int main()
{
    int days, year, month, month_day, day; 
    scanf("%d", &days); 

    year=days/365; 
    printf("%d ano(s)\n", year); 
    month_day=days-(year*365); 
    month = month_day/30; 
    printf("%d mes(es)\n", month); 
    day = month_day%30; 
    printf("%d dia(s)\n", day); 
    
    return 0; 
    
}