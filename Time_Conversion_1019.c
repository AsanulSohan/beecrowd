#include<stdio.h>
int main()
{
    int N, hr, min, min_sec, sec; 
    scanf("%d", &N); 
    hr=N/3600; 
    min_sec= N-(hr*3600); 
    min= min_sec/60; 
    sec=min_sec%60; 
    printf("%d:%d:%d\n", hr, min, sec); 

    return 0; 

}