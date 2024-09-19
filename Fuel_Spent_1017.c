#include<stdio.h>
int main()
{
    int km, avg, hr; 
    scanf("%d%d", &hr, &avg); 
    km= hr*avg; 
    printf("%.3f\n", (float)km/12); 
}