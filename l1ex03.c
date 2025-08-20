//3) Desenvolva um algoritmo em linguagem C/C++, onde o usuário informará três
//datas sendo (dia, mês, ano) individualmente, e a saída desta data será formatada no
//formato pt-BR (dd/mm/aaaa).//
#include<stdio.h>

int main()
{
    int dia, mes, ano;

    printf("\nDigite o dia: ");
    scanf("%d", &dia);


    printf("\nDigite o mes: ");
    scanf("%d", &mes);


    printf("\nDigite o ano: ");
    scanf("%d", &ano);


     printf("\n%d/%d/%d", dia,mes,ano);




    return 0;


}