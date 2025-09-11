#include <stdio.h>

int main() {
    printf("Desafio de Xadrez!\n");
    printf("Novo Commit!\n");

        int bispo = 1, rainha = 1, cavalo = 1; 
        int movimentos_rainha = 1;
        

        bispo = 1;
        rainha = 1;

            int movimento_torre; 
            printf("\n --- Movimento da Torre! --- \n");
            printf("Quantas casas voce quer mover a torre para a direita? ");
            scanf("%d", &movimento_torre);

            if (movimento_torre > 0 ) { 
            for (int torre = 1; torre <= movimento_torre; torre++) {
                printf("torre ");
                printf("direita %d \n", torre);
               } 
            } else {
                printf("Numero invalido. Por favor, Digite um valor maior que zero.\n");
            } 
            

            int movimento_bispo;
            printf("\n--- Movimento do Bispo! ---\n");
            printf("quantas casas voce quer mover o bispo na diagonal ?");
            scanf("%d", &movimento_bispo);

            if (movimento_bispo > 0) { 
            while (bispo <= movimento_bispo) {
            printf("Bispo ");
            printf("Diagonal Direita %d \n", bispo);
            bispo++;
           }
         } else { 
            printf("Numero invalido. Por favor, Digite uim valor maior.\n");
         } 

            int movimento_rainha_usuario;
            printf("\n--- Movimento da Rainha! ---\n");
            printf("Quantas casas voce quer mover a rainha para a esquerda?");
            scanf("%d", &movimento_rainha_usuario);

            if (movimento_rainha_usuario > 0) {
            do {
                printf("rainha ");
                printf("Esquerda! %d \n", rainha);
                rainha++;
                movimentos_rainha++;

               } while (movimentos_rainha <= movimento_rainha_usuario);
            } else { 
                printf("Numero invalido. Por favor, Digite um valior maior.\n");  
            }

              char mover_cavalo;
              printf("\n --- Movimento do Cavalo! --- \n");
              printf("Voce quer mover o cavalo? (S/N) ");
              scanf(" %c", &mover_cavalo);
              
              if (mover_cavalo == 'S' || mover_cavalo == 's') {
              while (cavalo--) {
                for (int i = 0; i < 2; i++) {
                    printf("Cima\n");
                }
                printf("Direita\n");
                 }
               } else if (mover_cavalo == 'N' || mover_cavalo == 'n') {
                    printf("O cavalo nao foi movido.\n");
              } else {
                printf("Opção invalida. Por favopr, Digite 'S' ou 'N'. \n");
              }
        
        
        }