#include <stdio.h>
#include <stdlib.h>  // Para rand() e srand()
#include <time.h>    // Para time()

int main() {
    int numeroSecreto, palpite;
    
    srand(time(0));  
    numeroSecreto = rand() % 100 + 1;  

    printf("Bem-vindo ao joguinho de adivinhar o numero\n");
    printf("Tente adivinhar o numero que estou pensando (entre 1 e 100).\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite < numeroSecreto) {
            printf("Muito baixo! Tente novamente.\n");
        } else if (palpite > numeroSecreto) {
            printf("Muito alto! Tente novamente.\n");
        } else {
            printf("Parabens! Você acertou o numero.\n");
        }
    } while (palpite != numeroSecreto); 

    return 0;
}

