#include <stdio.h>

int main(void) {
    float n1, n2, n3, n4;
    float p1, p2, p3, p4;

    printf("--- NOTAS ---\n");
    printf("Digite a nota N1: "); scanf("%f", &n1);
    printf("Digite a nota N2: "); scanf("%f", &n2);
    printf("Digite a nota N3: "); scanf("%f", &n3);
    printf("Digite a nota N4: "); scanf("%f", &n4);

    printf("\n--- PESOS ---\n");
    printf("Digite o peso P1: "); scanf("%f", &p1);
    printf("Digite o peso P2: "); scanf("%f", &p2);
    printf("Digite o peso P3: "); scanf("%f", &p3);
    printf("Digite o peso P4: "); scanf("%f", &p4);

    float soma_pesos = p1 + p2 + p3 + p4;
    
    // Novamente, a verificação contra divisão por zero é obrigatória.
    if (soma_pesos != 0) {
        float numerador = (p1 * n1) + (p2 * n2) + (p3 * n3) + (p4 * n4);
        float media_ponderada = numerador / soma_pesos;
        printf("\nA média ponderada final é: %.2f\n", media_ponderada);
    } else {
        printf("\nErro: A soma dos pesos é zero. Impossível calcular a média.\n");
    }

    return 0;
}