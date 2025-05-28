/*
    9.2) Ler a quantidade de alunos existentes em uma turma, ler as notas destes alunos, calcular e imprimir a média aritmética destas notas.
    [Entrada]                           [Saída]
    5 (quantidade de alunos)
    10 8.5 7.5 5 9 (notas dos alunos)   
                                        8 (média)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int qtdAlunos, i;
    float nota, media, notas = 0;
    // Inputs
    printf("Programa para receber (N) Alunos e suas notas e informar suas notas.\n");
    printf("Quantidade de alunos?: "); scanf("%d", &qtdAlunos);
    // Processing
    for (i = 1; i <= qtdAlunos; i++) {
        printf("Nota do %dº aluno: ", i); scanf("%f", &nota);
        notas += nota;
    }
    media = (float) notas / qtdAlunos;
    // Outputs
    printf("%.2f (média)", media);
    return 0;
}