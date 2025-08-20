//2) Desenvolva um algoritmo em linguagem C/C++, que considerando o valor do litro da gasolina a R$ 5,89 calcule o valor em dinheiro (R$) para encher um tanque o qual o usuário informará a capacidade do seu tanque. 

#include <stdio.h>




int main() {
    float GASOLINA = 5.89, cap_tanque, pago;

    printf("\nQual a capacidade do tanque (em litros): ");
    scanf("%f", &cap_tanque);

    pago = GASOLINA * cap_tanque;


    printf("\nPara completar o tanque %.2f irá cusrtar R$ %.2f", cap_tanque, pago);

    return 0;
}