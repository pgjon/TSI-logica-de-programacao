/*
   9.6) Escreva um algoritmo para ler a quantidade de alunos de uma turma. Ler as notas das 2 avaliações de cada aluno, calcular e escreva a sua nota final (média aritmética das notas das 2 avaliações). Ao final da digitação escrever também:
   
   • A média aritmética das notas finais dos alunos aprovados (nota final igual ou superior a 6).
   • O percentual de alunos aprovados em relação ao total de alunos da turma.

   [Entrada]                [Saída]
   8 (quantidade de alunos)
   6 (nota 1) 8 (nota 2)    7 (nota final)
   5 (nota 1) 4 (nota 2)    4.5 (nota final)
   2 (nota 1) 3 (nota 2)    2.5 (nota final)
   8 (nota 1) 8 (nota 2)    8   (nota final)
   9 (nota 1) 9 (nota 2)    9   (nota final)
   7 (nota 1) 2 (nota 2)    4.5 (nota final)
   5 (nota 1) 5 (nota 2)    5   (nota final)
   1 (nota 1) 2 (nota 2)    1.5 (nota final)
                            8 (média dos aprovados)
                            37.5 (percentual de aprovados)
 
*/
# include <stdio.h>
# include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Variables
    int qtdAlunos, nota1, nota2, i, acc = 0;
    float notaFinal, mediaAprovados, percentualAprovados, somaNotasAlunos = 0;
    // Inputs
    printf("Qual a quantidade de alunos da turma: "); scanf("%d", &qtdAlunos);
    // Processing
    for (i = 0; i < qtdAlunos; i++) {
        printf("Primeira nota: "); scanf("%d", &nota1);
        printf("Segunda nota: "); scanf("%d", &nota2);

        notaFinal = (float) (nota1 + nota2) / 2;

        printf("%.1f (nota final)\n\n", notaFinal);

        if (notaFinal >= 6) {
            somaNotasAlunos += notaFinal;
            acc++;
        }
    }

    mediaAprovados = somaNotasAlunos / acc;
    percentualAprovados = (float) acc * 100 / qtdAlunos;
    // Outputs
    printf("\n%.1f (média dos aprovados)", mediaAprovados);
    printf("\n%.1f (percentual de aprovados)", percentualAprovados);

    return 0;
}