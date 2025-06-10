/*
    6.11    Reescreva o algoritmo para o problema 6.10de forma que no final seja impressa a mensagem “Novo cálculo (1.Sim 2.Não)”solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente. Se for informado o código 1deve ser repetida a execução de todo o algoritmo para permitir um novo cálculo, caso contrário ele deve ser encerrado.

    [Entrada]               [Saída]
    -2 (nota 1)             Nota inválida
    7  (nota 1)
    9  (nota 2)             8 (média)
                            Novo cálculo (1.sim 2.não)?
    1 (sim)
    6
    12 (nota 2)             Nota inválida
    -3 (nota 2)             Nota inválida
    10 (nota 2)             8 (média)
                            Novo cálculo (1.sim 2.não)?
    2 (não)

*/
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int nota1, nota2, opcao = 1;
    float media;

    // Input
    while (opcao == 1) {
        printf("Digite a 1º nota: ");
        // Processing
        do {
            scanf("%d", &nota1);
            // Output
            if (nota1 < 0 || nota1 > 10) {
                printf("Nota inválida\n");
                printf("1º nota: ");
            }

        } while (nota1 < 0 || nota1 > 10);

        // Input
        printf("Digite a 2º nota: ");
        // Processing
        do {
            scanf("%d", &nota2);
            // Output
            if (nota2 < 0 || nota2 > 10)
            {
                printf("Nota inválida\n");
                printf("2º nota: ");
            }

        } while (nota2 < 0 || nota2 > 10);

        // Processing
        media = (nota1 + nota2) / 2.0;
        // Output
        printf("%.1f (média)\n", media);

        printf("Novo cálculo (1.sim 2.não)? "), scanf("%d", &opcao);
    }

    return 0;
}