#include <stdio.h>

int main() {
    printf("Desafio de Xadrez!\n");
    printf("Novo Commit!\n");

        int bispo, rainha, cavalo = 1;
        int movimentos_rainha = 1;
        

        bispo = 1;
        rainha = 1;
         
            printf("\n --- Movimento da Torre! --- \n");
            for (int torre = 1; torre <= 5; torre++)
            {
                printf("Voce vai mover sua torre ");
                printf("Para a direita %d \n", torre);
            } 

            printf("\n--- Movimento do Bispo! ---\n");
            while (bispo <= 5)
        {
            printf("Voce vai mover seu Bispo para ");
            printf("Diagonal Direita %d \n", bispo);
            bispo++;
            
        } 
            printf("\n--- Movimento da Rainha! ---\n");    
            do {
                printf("Voce vai mover sua rainha para ");
                printf("Esquerda! %d \n", rainha);
                rainha++;
                movimentos_rainha++;

            } while (movimentos_rainha <= 8);

              while (cavalo--)
              {
                for (int i = 0; i <2; i++){
                    printf("Cima\n");
                }
                printf("Direita\n");
              }
        
        
        }