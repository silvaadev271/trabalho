#include <stdio.h>
#include <string.h>

// Estrutura da carta
typedef struct {
    char nome[30];
    int forca;
    int velocidade;
    int inteligencia;
} Carta;

int main() {
    // Criando duas cartas de exemplo
    Carta carta1 = {"Dragão Vermelho", 90, 70, 60};
    Carta carta2 = {"Mago Azul", 50, 60, 95};

    int escolha;

    printf("=== Super Trunfo ===\n");
    printf("Comparando cartas:\n");
    printf("1 - Força\n2 - Velocidade\n3 - Inteligência\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &escolha);

    int valor1, valor2;

    switch (escolha) {
        case 1:
            valor1 = carta1.forca;
            valor2 = carta2.forca;
            printf("Força - %s: %d | %s: %d\n", carta1.nome, valor1, carta2.nome, valor2);
            break;
        case 2:
            valor1 = carta1.velocidade;
            valor2 = carta2.velocidade;
            printf("Velocidade - %s: %d | %s: %d\n", carta1.nome, valor1, carta2.nome, valor2);
            break;
        case 3:
            valor1 = carta1.inteligencia;
            valor2 = carta2.inteligencia;
            printf("Inteligência - %s: %d | %s: %d\n", carta1.nome, valor1, carta2.nome, valor2);
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Verificando vencedor
    if (valor1 > valor2) {
        printf(">>> %s venceu!\n", carta1.nome);
    } else if (valor2 > valor1) {
        printf(">>> %s venceu!\n", carta2.nome);
    } else {
        printf(">>> Empate!\n");
    }

    return 0;
}