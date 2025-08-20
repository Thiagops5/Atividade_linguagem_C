#include<stdio.h>
int main()
{
    float n1, n2, adi, sub, mult, div;

    printf("Digite o valor 1: ");
    scanf("%f", &n1);
    printf("Digite o valor 2: ");
    scanf("%f", &n2);
    
    adi = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    printf("\nAdição: {%.2f}", adi);
    printf("\nSubtração: {%.2f}", sub);
    printf("\nMultiplicação: {%.2f}", mult);
    printf("\nDivisão: {%.2f}", div);



    return 0;
}