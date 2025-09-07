#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    printf("Desafio de Xadrez!\n");
    printf("Novo Commit!\n");

        int bispo, rainha;
        int movimentos_rainha = 1;

        bispo = 1;
        rainha = 1;
         
            printf("\n --- Movimento da Torre! --- \n");
            for (int torre = 1; torre <= 5; torre++)
            {
                printf("Voce vai mover sua torre");
                printf("Para a direita %d \n", torre);
            } 

            printf("\n--- Movimento do Bispo! ---\n");
            while (bispo <= 5)
        {
            printf("Voce vai mover seu Bispo para");
            printf("Diagonal Direita: %d \n", bispo);
            bispo++;
            
        } 
            printf("\n--- Movimento da Rainha! ---\n");    
            do {
                printf("Voce vai mover sua rainha para ");
                printf("Esquerda! %d \n", rainha);
                rainha++;
                movimentos_rainha++;

            } while (movimentos_rainha < 9);
            

        


    


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
