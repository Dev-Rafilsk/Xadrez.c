#include <stdio.h>


#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO_RECURSIVO 5
#define MOVIMENTOS_RAINHA 8

#define CAVALO_VERT_MAX 2
#define CAVALO_HORIZ_MAX 1

#define BISPO_PASSOS_VERT 3
#define BISPO_PASSOS_HORIZ 3

void moverTorreRecursivo(int casas_restantes) {

    if (casas_restantes == 0) {
        return;
    }
    
   
    printf("Casa %d: Direita\n", MOVIMENTOS_TORRE - casas_restantes + 1);
    
   
    moverTorreRecursivo(casas_restantes - 1);
}

/**
 * @param casas_restantes O número de casas que o Bispo ainda precisa mover.
 */
void moverBispoRecursivo(int casas_restantes) {

    if (casas_restantes == 0) {
        return;
    }
    
 
    printf("Casa %d: Cima, Direita\n", MOVIMENTOS_BISPO_RECURSIVO - casas_restantes + 1);
    
  
    moverBispoRecursivo(casas_restantes - 1);
}

void moverRainhaRecursivo(int casas_restantes) {

    if (casas_restantes == 0) {
        return;
    }
    

    printf("Casa %d: Esquerda\n", MOVIMENTOS_RAINHA - casas_restantes + 1);
    
 
    moverRainhaRecursivo(casas_restantes - 1);
}


int main() {
    printf("==========================================\n");
    printf("  Simulador Avancado de Movimento de Pecas\n");
    printf("        (Recursividade e Loops Complexos)\n");
    printf("==========================================\n\n");


    printf("--- 1. Movimento da Torre (usando Recursividade) ---\n");
    printf("A Torre se move %d casas para a Direita.\n", MOVIMENTOS_TORRE);
    moverTorreRecursivo(MOVIMENTOS_TORRE);
    printf("Movimento da Torre concluido.\n\n");

    printf("--- 2. Movimento do Bispo (usando Recursividade) ---\n");
    printf("O Bispo se move %d casas na diagonal (Cima, Direita).\n", MOVIMENTOS_BISPO_RECURSIVO);
    moverBispoRecursivo(MOVIMENTOS_BISPO_RECURSIVO);
    printf("Movimento do Bispo por Recursividade concluido.\n\n");

    printf("--- 3. Movimento da Rainha (usando Recursividade) ---\n");
    printf("A Rainha se move %d casas para a Esquerda.\n", MOVIMENTOS_RAINHA);
    moverRainhaRecursivo(MOVIMENTOS_RAINHA);
    printf("Movimento da Rainha concluido.\n\n");

    printf("--- 4. Movimento do Cavalo (Loops Aninhados Complexos) ---\n");
    printf("O Cavalo se move em 'L': %d casas para Cima e %d casa para Direita.\n", CAVALO_VERT_MAX, CAVALO_HORIZ_MAX);

    int vert_count = 0;   
    int horiz_count = 0; 
    int passo_total = 1;  

    for (int i = 1; i <= CAVALO_VERT_MAX; i++) {

        if (vert_count < CAVALO_VERT_MAX) {
            printf("Passo %d: Cima\n", passo_total);
            vert_count++;
            passo_total++;
        }
    }

   
    while (1) { 
        if (vert_count == CAVALO_VERT_MAX && horiz_count < CAVALO_HORIZ_MAX) {
            printf("Passo %d: Direita\n", passo_total);
            horiz_count++;
            passo_total++;
           
            break; 
        } else if (horiz_count >= CAVALO_HORIZ_MAX) {
          
             break;
        } else {
           
             break;
        }
    }
    printf("Movimento do Cavalo concluido.\n\n");

    printf("--- 5. Movimento do Bispo (Loops Aninhados para Diagonal) ---\n");
    printf("O Bispo se move %d passos na diagonal (Baixo, Esquerda).\n", BISPO_PASSOS_VERT);

    int passo_diagonal = 1;

 
    for (int v = 1; v <= BISPO_PASSOS_VERT; v++) {
   
        for (int h = 1; h <= BISPO_PASSOS_HORIZ; h++) {

            if (v == h) {
                printf("Casa %d: Baixo, Esquerda\n", passo_diagonal);
                passo_diagonal++;
            }
          
        }
    }
    printf("Movimento do Bispo por Loops Aninhados concluido.\n\n");

    printf("==========================================\n");
    printf("        Fim da Simulacao\n");
    printf("==========================================\n");

    return 0;
}