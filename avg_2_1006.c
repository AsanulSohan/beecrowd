#include<stdio.h>
int main()
{
    float a, b, c, avg; 
    scanf("%f %f %f", &a, &b, &c); 
    avg= ((a*2.0)+(b*3.0)+(c*5.0))/10; 

    printf("MEDIA = %.1f\n", avg); 

    return 0; 
}