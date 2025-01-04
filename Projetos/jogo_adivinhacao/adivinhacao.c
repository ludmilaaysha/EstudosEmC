#include <stdio.h>

#define NUM_TENTATIVAS 5

int main() {
    printf("*************************************\n");
    printf("* Bem-vindo ao jogo de adivinhação! *\n");
    printf("*************************************\n");

    int secretnum = 42;
    int chute;

    for (int i = 1; i <= NUM_TENTATIVAS; i++){
        printf("Tentativa %d de %d\n", i, NUM_TENTATIVAS);
        printf("Qual é o seu chute?\n");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == secretnum);

        if(acertou){
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");
            break;
        }
        else {
            int maior = chute > secretnum;
            if (maior) {
                printf("Você errou!\n");
                printf("%d é maior que o número secreto\n", chute);
            }
            else {
                printf("Você errou!\n");
                printf("%d é menor que o número secreto\n", chute);
            }
        }

        if (i == NUM_TENTATIVAS) {
            printf("Fim de jogo\n");
        }

    }


    return 0;
}