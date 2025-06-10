/*
    6.12    Reescreva o algoritmo do exercício 6.11validando a resposta do usuário para a pergunta “Novo Cálculo (1.Sim 2.Não)?”(aceitar apenas os códigos 1 ou 2).
    [Entrada]           [Saída]
    -2 (nota 1)         Nota inválida
    7  (nota 1)         
    9  (nota 2)         8 (média)
                        Novo cálculo (1.sim 2.não)?
    3                   Novo cálculo (1.sim 2.não)?
    1 (sim)
    6
    12 (nota 2)         Nota inválida
    10 (nota 2)         8 (média)
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

    // Entra no programa 
    while (opcao == 1) {
        printf("Digite a 1º nota: ");
        // Validação da primeira nota
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
        // Validação da segunda nota
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

        // Validação para permanecer fazendo outra operação
        do {
            printf("Novo cálculo (1.sim 2.não)? "), scanf("%d", &opcao);
            // se opcao = 1 continuar no programa.
            if (opcao == 1)
                break;
        } while (opcao != 2);
    }

    return 0;
}