#include <stdio.h>

// ================== FUNÇÕES RECURSIVAS ==================

// Função recursiva para movimento da Torre (direita)
void moverTorre(int movimentos) {
    if (movimentos > 0) {
        printf("Direita\n");
        moverTorre(movimentos - 1);  // Chamada recursiva
    }
}

// Função recursiva para movimento do Bispo (diagonal cima/direita)
void moverBispo(int movimentos) {
    if (movimentos > 0) {
        printf("Cima, Direita\n");
        moverBispo(movimentos - 1);  // Chamada recursiva
    }
}

// Função recursiva para movimento da Rainha (esquerda)
void moverRainha(int movimentos) {
    if (movimentos > 0) {
        printf("Esquerda\n");
        moverRainha(movimentos - 1);  // Chamada recursiva
    }
}

// ================== FUNÇÃO PRINCIPAL ==================
int main() {
    // Declaração de constantes para o número de movimentos
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;
    const int MOV_CAVALO_CIMA = 2;
    const int MOV_CAVALO_DIREITA = 1;
    
    printf("=== SIMULACAO AVANCADA DE XADREZ ===\n\n");
    
    // ================== TORRE (RECURSIVO) ==================
    printf("--- MOVIMENTO DA TORRE (RECURSIVO) ---\n");
    printf("Movendo %d casas para a direita:\n", MOV_TORRE);
    moverTorre(MOV_TORRE);
    
    // ================== BISPO (LOOPS ANINHADOS + RECURSIVO) ==================
    printf("\n--- MOVIMENTO DO BISPO (LOOPS ANINHADOS) ---\n");
    printf("Movendo %d casas na diagonal (cima e direita):\n", MOV_BISPO);
    
    // Implementação com loops aninhados (alternativa)
    for (int vertical = 0; vertical < MOV_BISPO; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
    
    printf("\n--- MOVIMENTO DO BISPO (RECURSIVO) ---\n");
    printf("Movendo %d casas na diagonal (cima e direita):\n", MOV_BISPO);
    moverBispo(MOV_BISPO);
    
    // ================== RAINHA (RECURSIVO) ==================
    printf("\n--- MOVIMENTO DA RAINHA (RECURSIVO) ---\n");
    printf("Movendo %d casas para a esquerda:\n", MOV_RAINHA);
    moverRainha(MOV_RAINHA);
    
    // ================== CAVALO (LOOPS COMPLEXOS) ==================
    printf("\n--- MOVIMENTO DO CAVALO (LOOPS COMPLEXOS) ---\n");
    printf("Movendo em L (%d cima + %d direita):\n", MOV_CAVALO_CIMA, MOV_CAVALO_DIREITA);
    
    // Loops aninhados complexos com múltiplas variáveis
    int cima_feito = 0;
    int direita_feito = 0;
    
    for (int etapa = 1; etapa <= 3; etapa++) {
        for (int sub_etapa = 1; sub_etapa <= 2; sub_etapa++) {
            if (etapa == 1 && sub_etapa == 1 && cima_feito < MOV_CAVALO_CIMA) {
                printf("Cima\n");
                cima_feito++;
                continue;  // Continua para próxima iteração
            }
            
            if (etapa == 1 && sub_etapa == 2 && cima_feito < MOV_CAVALO_CIMA) {
                printf("Cima\n");
                cima_feito++;
                break;  // Sai do loop interno
            }
            
            if (etapa == 2 && direita_feito < MOV_CAVALO_DIREITA) {
                printf("Direita\n");
                direita_feito++;
                break;
            }
            
            if (etapa == 3) {
                // Verificação final
                if (cima_feito == MOV_CAVALO_CIMA && direita_feito == MOV_CAVALO_DIREITA) {
                    // Movimento completo
                    break;
                }
            }
        }
        
        // Condição de parada antecipada
        if (cima_feito == MOV_CAVALO_CIMA && direita_feito == MOV_CAVALO_DIREITA) {
            break;
        }
    }
    
    printf("\n=== SIMULACAO AVANCADA CONCLUIDA ===\n");
    return 0;
}
