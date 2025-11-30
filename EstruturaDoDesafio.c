#include <stdio.h>
#include <string.h>

#define TAM_NOME 50
#define TAM_COR 20
#define QTD_PAISES 5

typedef struct {
    char nome[TAM_NOME];
    char cor[TAM_COR];
    int tropas;
} Territorio;

int main() {
    Territorio paises[QTD_PAISES];

    for (int i = 0; i < QTD_PAISES; i++) {
        printf("\n--- Cadastro do Território %d ---\n", i + 1);

        printf("Nome do país: ");
        fgets(paises[i].nome, TAM_NOME, stdin);
        paises[i].nome[strcspn(paises[i].nome, "\n")] = '\0';

        printf("Cor do território: ");
        fgets(paises[i].cor, TAM_COR, stdin);
        paises[i].cor[strcspn(paises[i].cor, "\n")] = '\0';

        printf("Número de tropas: ");
        scanf("%d", &paises[i].tropas);
        getchar(); // limpa o ENTER do buffer
    }

    printf("\n=== Países cadastrados ===\n");
    for (int i = 0; i < QTD_PAISES; i++) {
        printf("\nPaís %d:\n", i + 1);
        printf("Nome: %s\n", paises[i].nome);
        printf("Cor : %s\n", paises[i].cor);
        printf("Tropas: %d\n", paises[i].tropas);
    }

    return 0;
}
