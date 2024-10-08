#include <stdio.h>

int main() {
    int numAlunos;
    float altura, somaAlturas = 0.0, media;

    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    if (numAlunos <= 0) {
        printf("Numero invalido de alunos.\n");
        return 1;
    }

    for (int i = 1; i <= numAlunos; i++) {
        printf("Digite a altura do aluno %d (em metros): ", i);
        scanf("%f", &altura);
        somaAlturas += altura;  
    }

    media = somaAlturas / numAlunos;

    printf("A media de altura da turma eh: %.2f metros\n", media);

    return 0;
}

