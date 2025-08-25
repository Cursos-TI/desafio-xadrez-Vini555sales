#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
//

// Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

//

// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

//

typedef struct
{
    int x;
    int y;
} Vector2;

void LineBreak(int times)
{
    for(int i = 0; i < times; i++)
    {
        printf("\n");
    }
}

void MoveTower(int targetMovementValue)
{
    if(targetMovementValue <= 0) return;

    printf("- Torre se moveu para a direita");
    LineBreak(1);
    MoveTower(targetMovementValue - 1);
}

int main() {
    
    const int towerMovementAmount = 5;
    const int bishopMovementAmount = 5;
    const int queenMovementAmount = 8;

    Vector2 horseMovementAmount;
    horseMovementAmount.x = 1;
    horseMovementAmount.y = 2;

    printf("Movimentação da Torre:");
    LineBreak(2);
    
    int currentTowerMovementAmount = 0;

    MoveTower(towerMovementAmount);

    LineBreak(1);
    printf("Movimentação Bispo: ");
    LineBreak(2);

    int bishopHorizontalMovement = 0;

    while(bishopHorizontalMovement < bishopMovementAmount)
    {
        printf("- O Bispo se moveu para a direita");
        LineBreak(1);

        bishopHorizontalMovement++;
        
        if(bishopHorizontalMovement <= bishopMovementAmount - 1) continue;
        
        int bishopVerticalMovement = 0;

        while(bishopVerticalMovement < bishopMovementAmount)
        {
            printf("- O Bispo se moveu para cima");
            LineBreak(1);

            bishopVerticalMovement++;
        }
    }

    LineBreak(1);
    printf("- Movimentação Rainha:");
    LineBreak(2);
    
    int currentQueenMovementAmount = 0;

    do
    {
        currentQueenMovementAmount++;
        printf("- A Rainha se moveu para a esquerda");
        LineBreak(1);
    }
    while(currentQueenMovementAmount < queenMovementAmount);

    LineBreak(1);
    printf("Movimentação do Cavalo:");
    LineBreak(2);
    
    for(int x = 0, y = 0; x < horseMovementAmount.x && y < horseMovementAmount.y; y++)
    {
        printf("- O cavalo se moveu para baixo");
        LineBreak(1);

        if(y < horseMovementAmount.y - 1) continue;
        
        printf("- O cavalo se moveu para a esquerda");
        LineBreak(2);
        x++;
    }

    return 0;
}
