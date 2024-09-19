#include<stdio.h>
int main()
{
    int codeOfProduct1, codeOfProduct2, unitOfproduct1, unitOfproduct2; 
    double PriceProduct1, PriceProduct2; 
    double ProductTotal1, ProductTotal2, TotalAmount; 
    scanf("%d %d", &codeOfProduct1, &unitOfproduct1); 
    scanf("%lf", &PriceProduct1); 
    scanf("%d %d", &codeOfProduct2, &unitOfproduct2); 
    scanf("%lf", &PriceProduct2); 
    
    ProductTotal1= unitOfproduct1*PriceProduct1; 
    ProductTotal2= unitOfproduct2*PriceProduct2; 
    TotalAmount=ProductTotal1+ProductTotal2; 
    printf("VALOR A PAGAR: R$ %.2lf\n", TotalAmount); 
}