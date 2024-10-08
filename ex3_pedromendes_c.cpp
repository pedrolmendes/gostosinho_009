#include <stdio.h>

int main() {
    int i = 0;
    float numero, soma = 0.0;

    while (i < 5) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numero);
        soma += numero;
        i++;
    }

    printf("A media dos numeros eh: %.2f\n", soma / 5);

    return 0;
}

