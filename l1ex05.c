//5) Desenvolva um algoritmo em linguagem C/C++, que recebo do usuário as quatro
//notas bimestrais, calcule a média aritmética simples “ (n1 + n2 + n3 + n4) / 4 “ e
//imprima o valor final da média.//

    #include<stdio.h>

    int main()
    {
    float n1, n2, n3, n4, media;


    printf("\nDigite Nota 1: ");
    scanf("%f", &n1);

    printf("\nDigite Nota 2: ");
    scanf("%f", &n2);

    printf("\nDigite Nota 3: ");
    scanf("%f", &n3);

    printf("\nDigite Nota 4: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("\nMedia das notas: %.1f", media);





    return 0;
}