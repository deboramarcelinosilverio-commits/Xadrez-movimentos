#include <stdio.h>

int main() {
    // Declaração de constantes para o número de movimentos de cada peça
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;
    const int MOVIMENTOS_CAVALO_BAIXO = 2;  // Duas casas para baixo
    const int MOVIMENTOS_CAVALO_ESQUERDA = 1; // Uma casa para a esquerda
    
    printf("=== SIMULACAO DE MOVIMENTOS DE XADREZ ===\n\n");
    
    // ================== TORRE ==================
    // Move em linha reta horizontal/vertical - 5 casas para a direita
    printf("--- MOVIMENTO DA TORRE ---\n");
    printf("Movendo %d casas para a direita:\n", MOVIMENTOS_TORRE);
    
    // Usando estrutura FOR (ideal quando sabemos o número exato de repetições)
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
    
    // ================== BISPO ==================
    // Move na diagonal - 5 casas para cima e direita
    printf("\n--- MOVIMENTO DO BISPO ---\n");
    printf("Movendo %d casas na diagonal (cima e direita):\n", MOVIMENTOS_BISPO);
    
    // Usando estrutura WHILE
    int contador_bispo = 0;
    while (contador_bispo < MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");  // Movimento diagonal combinado
        contador_bispo++;
    }
    
    // ================== RAINHA ==================
    // Move em todas as direções - 8 casas para a esquerda
    printf("\n--- MOVIMENTO DA RAINHA ---\n");
    printf("Movendo %d casas para a esquerda:\n", MOVIMENTOS_RAINHA);
    
    // Usando estrutura DO-WHILE (executa pelo menos uma vez)
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOVIMENTOS_RAINHA);
    
    // ================== CAVALO ==================
    // Move em L: 2 casas para baixo + 1 casa para a esquerda
    printf("\n--- MOVIMENTO DO CAVALO ---\n");
    printf("Movendo em L (2 baixo + 1 esquerda):\n");
    
    // Loop aninhado: FOR para as casas para baixo + WHILE para a casa para esquerda
    for (int movimento_baixo = 0; movimento_baixo < MOVIMENTOS_CAVALO_BAIXO; movimento_baixo++) {
        printf("Baixo\n");  // Movimento para baixo
    }
    
    int movimento_esquerda = 0;
    while (movimento_esquerda < MOVIMENTOS_CAVALO_ESQUERDA) {
        printf("Esquerda\n");  // Movimento para esquerda
        movimento_esquerda++;
    }
    
    printf("\n=== SIMULACAO CONCLUIDA ===\n");
    return 0;
}
