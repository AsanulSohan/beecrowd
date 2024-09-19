#include<stdio.h>
int main()
{
    int codeOfProduct1, codeOfProduct2, unitOfproduct1, unitOfproduct2; 
    double PriceProduct1, PriceProduct2; 
    scanf("%d %d %d %d", &codeOfProduct1, &unitOfproduct1, &codeOfProduct2, &unitOfproduct2); 
    scanf("%lf %lf", &PriceProduct1, &PriceProduct2); 
     printf("Code of product 1: %d\n Number of units of product 1: %d\n Code of product 2: %d\n Number of units of product 2: %d\n", codeOfProduct1, unitOfproduct1, codeOfProduct2, unitOfproduct2); 
    printf("Price for one unit of product 1: %lf\n Price for one unit of product 2:%lf\n", PriceProduct1, PriceProduct2); 
    double ProductTotal1, ProductTotal2, TotalAmount; 
    ProductTotal1= unitOfproduct1*PriceProduct1; 
    PriceProduct2= unitOfproduct1*PriceProduct2; 
    TotalAmount=PriceProduct1+PriceProduct2; 
    printf("VALOR A PAGAR: R$ %.2lf\n", TotalAmount); 