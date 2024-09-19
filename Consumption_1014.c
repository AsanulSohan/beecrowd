#include<stdio.h>
int main()
{
    int x; 
    float y; 
    scanf("%d%f", &x, &y); 
    float avg_consumtion = x/y; 
    printf("%.3f km/l\n", avg_consumtion); 

    return 0; 
}