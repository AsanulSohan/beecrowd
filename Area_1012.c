#include<stdio.h>
int main()
{
    double base1, base2, height , pi=3.14159; 
    scanf("%lf %lf %lf", &base1, &base2, &height);
    double triangle=0.5*base1*height, circle= pi*height*height, 
    trapezium= 0.5*(base1+base2)*height, squre=base2*base2, 
    rectangle=base1*base2; 
    printf("TRIANGULO: %.3lf\n", triangle); 
    printf("CIRCULO: %.3lf\n", circle); 
    printf("TRAPEZIO: %.3lf\n", trapezium); 
    printf("QUADRADO: %.3lf\n", squre); 
    printf("RETANGULO: %.3lf\n", rectangle); 

    return 0; 
}