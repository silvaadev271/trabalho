#include <stdio.h>
#include <string.h>

// Estrutura que representa uma peça de xadrez
typedef struct {
    char nome[20];
    int linha;
    int coluna;
} Peca;

// Função para mostrar o tabuleiro (8x8)
void mostrarTabuleiro(Peca peca) {
    printf("\n   A  B  C  D  E  F  G  H\n");
    for (int i = 8; i >= 1; i--) {
        printf("%d ", i);
        for (int j = 1; j <= 8; j++) {
            if (i == peca.linha && j == peca.coluna)
                printf("[X]");
            else
                printf("[ ]");
        }
        printf(" %d\n", i);
    }
    printf("   A  B  C  D  E  F  G  H\n\n");
}

// Função que verifica se o movimento é válido (exemplo com torre)
int moverTorre(Peca *peca, int novaLinha, int novaColuna) {
    // A torre só pode se mover na mesma linha ou na mesma coluna
    if (peca->linha == novaLinha || peca->coluna == novaColuna) {
        peca->linha = novaLinha;
        peca->coluna = novaColuna;
        return 1; // movimento válido
    }
    return 0; // movimento inválido
}

int main() {
    Peca torre;
    strcpy(torre.nome, "Torre");
    torre.linha = 1;
    torre.coluna = 1;

    int linhaDestino, colunaDestino;
    char colunaLetra;

    printf("=== DESAFIO: Movimentando as Pecas do Xadrez ===\n");
    printf("Peca: %s\nPosicao inicial: A1\n", torre.nome);
    mostrarTabuleiro(torre);

    printf("Digite o destino (exemplo: A5, D1, H8): ");
    scanf(" %c%d", &colunaLetra, &linhaDestino);

    // Converte letra da coluna (A-H) para número (1-8)
    colunaDestino = (colunaLetra - 'A') + 1;

    if (moverTorre(&torre, linhaDestino, colunaDestino)) {
        printf("\nMovimento valido!\n");
    } else {
        printf("\nMovimento invalido! A torre se move apenas em linha reta.\n");
    }

    mostrarTabuleiro(torre);

    return 0;
}
