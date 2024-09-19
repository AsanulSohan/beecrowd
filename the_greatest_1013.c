#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x, y, z; 
    scanf("%d%d%d", &x, &y, &z); 
    int max_ab= (x+y+ abs (x-y))/2; 
    int max_value=(max_ab+z+abs (max_ab-z))/2; 
    printf("%d eh o maior\n", max_value); 

    return 0; 
}