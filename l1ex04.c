//4) Desenvolva um algoritmo em linguagem Java, que pergunte ao usuário o seu 1o
//nome, o nome do meio e o seu último nome, e imprima tudo em uma única linha.//

#include<stdio.h>

int main()
{
    char nome[20], nomemio[20],sobrenome[20];

    printf("\nDigite o seu nome: ");
    scanf("%s", &nome);

     printf("\nDigite o seu nome do meio: ");
    scanf("%s", &nomemio);

     printf("\nDigite o seu sobrenome: ");
    scanf("%s", &sobrenome);

     printf("\nNome Completo: %s %s %s", nome, nomemio, sobrenome);

     return 0;

}