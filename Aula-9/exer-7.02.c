/*
    7.2)    Reescreva o algoritmo do exercício 7.1, para que seja impressa no final, a quantidade de alunosaprovados, reprovados ou que ficaram em exame. Considere as seguintes regras:
        •Alunos aprovados: Média igual ou superior a 6.
        •Alunos reprovados: Média inferior a 3.
        •Alunos em exame: Média inferior a 6, mas superior ou igual a 3.
    
    [Entrada]               [Saída]
    8 (nota 1) 9 (nota 2)   8.5 (média)
                            Calcular a média de outro aluno (1.sim 2.não)?
    1 (sim)
    5 (nota 1) 4 (nota 2)   4.5 (média)
                            Calcular a média de outro aluno (1.sim 2.não)?
    1 (sim)
    5 (nota 1) 7 (nota 2)   6 (média)
                            Calcular a média de outro aluno (1.sim 2.não)?
    1 (sim)
    3 (nota 1) 2 (nota 2)   2.5 (média)
                            Calcular a média de outro aluno (1.sim 2.não)?
    1 (sim)
    2 (nota 1) 2 (nota 2)   2 (média)
                            Calcular a média de outro aluno (1.sim 2.não)?
    1 (sim)
    8 (nota 1) 10 (nota 2)  9 (média)
                            Calcular a média de outro aluno (1.sim 2.não)?
    2 (não)
                            3 (quantidade de aprovados)
                            2 (quantidade de reprovados)
                            1 (quantidade de alunos em exame)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float nota1, nota2, media; 
    int opcao, aprovado = 0, reprovado = 0, exame = 0;
    // Inputs
    do {
        // Entrada
        printf("Nota 1: "); scanf("%f", &nota1);
        // validação não menor que 0 e maior que 10
        while ((nota1 < 0) || (nota1 > 10)){
            printf("Nota inválida!\nNota 1: "); scanf("%f", &nota1);
        }
        // Entrada
        printf("Nota 2: "); scanf("%f", &nota2);   
        // validação não menor que 0 e maior que 10
        while ((nota2 < 0) || (nota2 > 10)){
            printf("Nota inválida!\nNota 2: "); scanf("%f", &nota2);
        }
        
        // calculo da média
        media = (nota1 + nota2) / 2;
        // saida media
        printf("%.1f (média)\n", media);
        // contador para acumular quantidade de aulunos aprovados reprovados e em exame
        // aprovados
        if (media >= 6) {
            aprovado++;
        }
        // exame
        else if ((media >= 3) && (media < 6)) {
            exame++;
        }
        // reprovados
        else if (media < 3) {
            reprovado++;
        }
        // entrada para calcular outros alunos
        printf("Calcular a média de outro aluno (1.sim 2.não)? "); scanf("%d", &opcao);
        // validação da opção
        while (opcao != 1) {
            printf("Opção inválida!\n Opção: "); scanf("%d", &opcao);
            // opcao sendo = 2 sai do loop
            if (opcao == 2){
                break;
            }
        }
        
    } while (opcao != 2); 

    // saida resultados
    printf("%d (quantidade de aprovados)\n%d (quantidade reprovado\n%d (quantidade de alunos em exame))", aprovado, reprovado, exame);
    return 0;
}