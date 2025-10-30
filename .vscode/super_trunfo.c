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
    // Criando duas cartas
    Carta carta1 = {"Dragão Vermelho", 90, 70, 60};
    Carta carta2 = {"Mago Azul", 50, 60, 95};

    int escolha;

    printf("=== SUPER TRUNFO ===\n\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("Força: %d | Velocidade: %d | Inteligência: %d\n\n", carta1.forca, carta1.velocidade, carta1.inteligencia);

    printf("Carta 2: %s\n", carta2.nome);
    printf("Força: %d | Velocidade: %d | Inteligência: %d\n\n", carta2.forca, carta2.velocidade, carta2.inteligencia);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - Força\n2 - Velocidade\n3 - Inteligência\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n--- Resultado ---\n");

    switch (escolha) {
        case 1:
            if (carta1.forca > carta2.forca)
                printf("%s venceu com FORÇA!\n", carta1.nome);
            else if (carta2.forca > carta1.forca)
                printf("%s venceu com FORÇA!\n", carta2.nome);
            else
                printf("Empate em FORÇA!\n");
            break;
        case 2:
            if (carta1.velocidade > carta2.velocidade)
                printf("%s venceu com VELOCIDADE!\n", carta1.nome);
            else if (carta2.velocidade > carta1.velocidade)
                printf("%s venceu com VELOCIDADE!\n", carta2.nome);
            else
                printf("Empate em VELOCIDADE!\n");
            break;
        case 3:
            if (carta1.inteligencia > carta2.inteligencia)
                printf("%s venceu com INTELIGÊNCIA!\n", carta1.nome);
            else if (carta2.inteligencia > carta1.inteligencia)
                printf("%s venceu com INTELIGÊNCIA!\n", carta2.nome);
            else
                printf("Empate em INTELIGÊNCIA!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
