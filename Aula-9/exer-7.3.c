/*
    7.3)    Reescreva o algoritmo do exercício 7.2, para que seja impresso no final, o percentual de alunos aprovados, reprovados ou em exame em relação a quantidade total de alunos cujas notas foram informadas.
    
    [Entrada]              [Saída]
    8 (nota 1) 9 (nota 2)   8.5 (média)
                            Calcular a média de outro aluno (1.sim 2.não)?
    1 (sim)
    5 (nota 1) 4 (nota 2)   4.5 (média)
    Calcular a média de outro aluno (1.sim 2.não)?
    1 (sim)
    5 (nota 1) 7 (nota 2)   6 (média)
                            Calcular a média de outro aluno (1.sim 2.não)?
    1 (sim)
    3 (nota 1) 2 (nota 2)   2.5   (média)
                            Calcular a média de outro aluno (1.sim 2.não)?
    1 (sim)
    8 (nota 1) 10 (nota 2)  9 (média)
                            Calcular a média de outro aluno (1.sim 2.não)?
    2 (não)
    3 (quantidade de aprovados)
    1 (quantidade de alunos reprovados)
    1 (quantidade de alunos em exame)
    60 (percentual de aprovados)
    20 (percentual de reprovados)
    20 (percentual em exame)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float nota1, nota2, media; 
    int opcao, aprovado = 0, reprovado = 0, exame = 0, contador = 0;
    int mediaAprovado = 0, mediaExame = 0, mediaReprovado = 0;
    // Inputs
    do {
        // Entrada
        printf("\nNota 1: "); scanf("%f", &nota1);
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
        contador++;
    } while (opcao != 2); 

    mediaAprovado = aprovado * 100 / contador;
    mediaExame = exame * 100 / contador;
    mediaReprovado = reprovado * 100 / contador;
    // saida resultados
    printf("\n%d (quantidade de aprovados)\n%d (quantidade reprovado\n%d (quantidade de alunos em exame)\n",aprovado, reprovado, exame);
    printf("%d (percentual de aprovados)\n%d (percentual reprovado\n%d (percentual de alunos em exame))", mediaAprovado, mediaReprovado, mediaExame);

    printf("\ntotal contador %d\n", contador);
    return 0;
}