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
    Carta jogador, computador;
    int escolha;

    printf("======================================\n");
    printf("        JOGO SUPER TRUNFO 🃏\n");
    printf("======================================\n\n");

    // Jogador cria a própria carta
    printf("Crie sua carta!\n");
    printf("Digite o nome da sua carta: ");
    fgets(jogador.nome, 30, stdin);
    jogador.nome[strcspn(jogador.nome, "\n")] = '\0'; // remove o \n

    printf("Digite a força (0 a 100): ");
    scanf("%d", &jogador.forca);

    printf("Digite a velocidade (0 a 100): ");
    scanf("%d", &jogador.velocidade);

    printf("Digite a inteligência (0 a 100): ");
    scanf("%d", &jogador.inteligencia);

    // Carta do computador (pré-definida)
    strcpy(computador.nome, "Mago Supremo");
    computador.forca = 70;
    computador.velocidade = 80;
    computador.inteligencia = 90;

    printf("\n======================================\n");
    printf("Sua carta: %s\n", jogador.nome);
    printf("Força: %d | Velocidade: %d | Inteligência: %d\n", jogador.forca, jogador.velocidade, jogador.inteligencia);

    printf("\nCarta do computador: %s\n", computador.nome);
    printf("Força: %d | Velocidade: %d | Inteligência: %d\n", computador.forca, computador.velocidade, computador.inteligencia);

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - Força 💪\n");
    printf("2 - Velocidade ⚡\n");
    printf("3 - Inteligência 🧠\n");
    printf("Digite sua opção: ");
    scanf("%d", &escolha);

    printf("\n======================================\n");

    switch (escolha) {
        case 1:
            printf("Comparando FORÇA 💪\n");
            if (jogador.forca > computador.forca)
                printf("Você venceu!\n");
            else if (computador.forca > jogador.forca)
                printf("O computador venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Comparando VELOCIDADE ⚡\n");
            if (jogador.velocidade > computador.velocidade)
                printf("Você venceu!\n");
            else if (computador.velocidade > jogador.velocidade)
                printf("O computador venceu!\n");
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Comparando INTELIGÊNCIA 🧠\n");
            if (jogador.inteligencia > computador.inteligencia)
                printf("Você venceu!\n");
            else if (computador.inteligencia > jogador.inteligencia)
                printf("O computador venceu!\n");
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    printf("======================================\n");
    printf("Fim do jogo!\n");
    printf("======================================\n");

    return 0;
}
