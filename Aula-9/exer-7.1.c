/*
    7.1)    Escreva um algoritmo para ler 2 notas de um aluno, calcular e imprimir a média final. Logo após escrever a mensagem "Calcular a média de outro aluno 1.Sim 2.Não?"e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente, caso contrário deve ser encerrado imprimindo a quantidade de alunos aprovados (alunos com média igual ou superior a 6).
    
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
    3 (nota 1) 2 (nota 2)   2.5 (média)
                            Calcular a média de outro aluno (1.sim 2.não)?
    2 (não)
                            2 (quantidade de aprovados)
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    float nota1, nota2, media; int opcao, contador = 0;
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
        // contador para acumular quantidade de aulunos que tiveram media maior que 6
        if (media >= 6) {
            contador++;
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

    // saida
    printf("%d (quantidade de aprovados)", contador);
    return 0;
}